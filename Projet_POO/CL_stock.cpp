#include "CL_stock.h"

String^ CL_stock::creer_tva(String^ tauxtva)
{
    return "INSERT INTO TVA(TAUX_TVA) SELECT '" + tauxtva + "' WHERE NOT EXISTS(SELECT * FROM TVA WHERE TAUX_TVA = '" + tauxtva + "')";
}

String^ CL_stock::creer_article(String^ taux_tva, String^ nomarticle, String^ quantite, String^ seuilarticle,String^ nature, String^ couleur)
{
    return "INSERT INTO ARTICLE(ID_TVA,  NOM, QUANTITE, SEUIL_REAPPROVISIONEMENT, ID_NATURE,ID_COULEUR) VALUES((SELECT ID FROM TVA WHERE TAUX_TVA='" + taux_tva + "'), '" + nomarticle + "', '" + quantite + "', '" + seuilarticle + "',(SELECT ID FROM NATURE Where NATURE.NOM ='" + nature + "'),(SELECT ID FROM COULEUR WHERE NOM_COULEUR='" + couleur + "'))";
}

String^ CL_stock::creer_couleur(String^ couleur)
{

return "insert into COULEUR(nom_couleur) select * FROM (SELECT '" + couleur + "'  as cou  from DUAL) as temp where not exists(SELECT nom_COULEUR FROM COULEUR WHERE couleur.nom_COULEUR = temp.cou)";
}

String^ CL_stock::creer_nature(String^ nat)
{
    return "insert into NATURE(NOM)  SELECT * FROM ( SELECT '" + nat + "' as nature from DUAL) as temp where not exists (Select nom from NATURE where nature.nom = temp.nature)";
}

String^ CL_stock::creer_tarif(String^ prix_tarif, String^ taille,String^ article)
{
    return "INSERT INTO TARIF (ID_ARTICLE,PRIX,TAILLE_LOTS)VALUES((SELECT ID FROM ARTICLE WHERE ARTICLE.NOM = '" + article + "'),'" + prix_tarif + "','" + taille + "')";;
}

String^ CL_stock::modifier_article(String^taux_tva, String^ nom, String^ quantite, String^ seuil, String^ idarticle ,String^ nature ,String^ couleur)
{
    return "UPDATE ARTICLE SET ID_TVA=(SELECT ID FROM TVA WHERE TAUX_TVA ='" + taux_tva + "'),ID_COULEUR=(SELECT ID FROM COULEUR WHERE NOM_COULEUR ='" + couleur + "'),ID_NATURE=(SELECT ID FROM NATURE WHERE NOM ='" + nature + "'), NOM='" + nom + "',QUANTITE='" + quantite + "',SEUIL_REAPPROVISIONEMENT='" + seuil + "' WHERE ID='" + idarticle + "'";
}

String^ CL_stock::supprimer(String^ id)
{
return "DELETE FROM ARTICLE WHERE ID_ARTICLE = '"+id+"'";
}
    