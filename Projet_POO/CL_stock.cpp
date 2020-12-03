#include "CL_stock.h"

String^ CL_stock::creer_tva(String^ tauxtva)
{
    return "INSERT INTO TVA(TAUX_TVA) SELECT '" + tauxtva + "' WHERE NOT EXISTS(SELECT * FROM TVA WHERE TAUX_TVA = '" + tauxtva + "')";
}

String^ CL_stock::creer_article(String^ taux_tva, String^ nomarticle, String^ quantite, String^ seuilarticle)
{
    return "INSERT INTO ARTICLE(ID_TVA,  NOM, QUANTITE, SEUIL_REAPPROVISIONEMENT) VALUES('"+taux_tva+"', '"+nomarticle+"', '"+quantite+"', '"+seuilarticle+"')";

}

String^ CL_stock::creer_couleur(String^ couleur)
{
return "INSERT INTO COULEUR (couleur) WHERE NOT EXISTS(SELECT * FROM COULEUR WHERE NOM_COULEUR = '"+couleur+"')";
}

String^ CL_stock::creer_nature(String^, String^, String^)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ CL_stock::creer_tarif(String^, String^, String^, String^, String^)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}
