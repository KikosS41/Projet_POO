#include "CL_stock.h"

String^ CL_stock::creer_tva(String^ tauxtva)
{
    return "INSERT INTO TVA(TAUX_TVA) SELECT '" + tauxtva + "' WHERE NOT EXISTS(SELECT * FROM TVA WHERE TAUX_TVA = '" + tauxtva + "')";
}

String^ CL_stock::creer_article(String^ taux_tva, String^ nomarticle, String^ quantite, String^ seuilarticle)
{
    return "INSERT INTO ARTICLE(ID_TVA,  NOM, QUANTITE, SEUIL_REAPPROVISIONEMENT) VALUES((SELECT ID FROM TVA WHERE TAUX_TVA='" + taux_tva + "'), '" + nomarticle + "', '" + quantite + "', '" + seuilarticle + "')";

}

String^ CL_stock::creer_couleur(String^ couleur)
{
    //return "INSERT INTO COULEUR (nom_couleur) WHERE NOT EXISTS(SELECT NOM_COULEUR FROM COULEUR WHERE NOM_COULEUR = '"+couleur+"')";

    return "insert into COULEUR(nom_couleur) select * FROM (SELECT '" + couleur + "'  as cou  from DUAL) as temp where not exists(SELECT nom_COULEUR FROM COULEUR WHERE couleur.nom_COULEUR = temp.cou)";
}

String^ CL_stock::creer_nature(String^ nom, String^ nat)
{
    //return "INSERT INTO NATURE(ID_ARTICLE, NOM) SELECT ARTICLE.ID_ARTICLE, '" + nature + "' FROM ARTICLE WHERE ARTICLE.NOM = '" + nom + "' AND NOT EXISTS(SELECT * FROM NATURE, ARTICLE WHERE ARTICLE.NOM = '" + nom + "' AND NATURE.NOM = '" + nature + "')";
    return "insert into NATURE(ID_ARTICLE, NOM)  VALUES ( (SELECT ID FROM ARTICLE Where ARTICLE.NOM ='" + nom + "'), (SELECT * FROM ( SELECT '" + nat + "' as nature from DUAL) as temp where not exist (Select nom from NATURE where nature.nom = temp.nature)))";
}

String^ CL_stock::creer_tarif(String^ prix_tarif, String^ taille, String^ nom, String^ couleur, String^ nature)
{
    return "INSERT INTO TARIF (ID_ARTICLE,ID_COULEUR,ID_NATURE,PRIX,TAILLE_LOTS) SELECT,ARTICLE.ID_ARTICLE,COULEUR.ID_COULEUR,NATURE.ID_NATURE,'" + prix_tarif + "','" + taille + "' FROM NATURE, ARTICLE,COULEUR WHERE ARTICLE.NOM='" + nom + "' AND COULEUR.NOM_COULEUR='" + couleur + "' AND NATURE.NOM='" + nature + "' AND NOT EXISTS(SELECT* FROM TARIF, ARTICLE, COULEUR, NATURE WHERE ARTICLE.NOM='" + nom + "' AND COULEUR.NOM_COULEUR='" + couleur + "' AND NATURE.NOM='" + nature + "' AND PRIX='" + prix_tarif + "' AND TAILLE_LOTS='" + taille + "')";
}

String^ CL_stock::modifier_article(String^ taux_tva, String^ nom, String^ quantite, String^ seuil, String^ idarticle)
{
    return "UPDATE ARTICLE SET ID_TVA=(SELECT ID FROM TVA WHERE TAUX_TVA ='" + taux_tva + "'),NOM='" + nom + "',QUANTITE='" + quantite + "',SEUIL_REAPPROVISIONEMENT='" + seuil + "' WHERE ID='" + idarticle + "'";
}

String^ CL_stock::supprimer(String^ id)
{
    return "DELETE FROM ARTICLE WHERE ID_ARTICLE = '" + id + "'";
}