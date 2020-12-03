#include "CL_Client.h"

String^ CL_Client::creer(String^ id_adr_liv, String^ id_adr_fac, String^ id_dat_ann, String^ id_dat_1er, String^ nom, String^ prenom)
{
return "INSERT INTO CLIENT(ID_ADRESSELIVRAISON, ID_ADRESSEFACTURATION, ID_DATENAISSANCE, ID_DATE1ER, NOM, PRENOM) VALUES ('" + id_adr_liv + "', '" + id_adr_fac + "', '" + id_dat_ann + "', '" + id_dat_1er + "', '" + nom + "', '" + prenom + "')";

}

String^ CL_Client::afficher(String^)
{
    return "SELECT ID_ARTICLE as NumArticle, NOM as Designation, QUANTITE_STOCK_ARTICLE as Stock, SEUIL_REAPPROVISIONEMENT as SeuilRea, PRIX_HT_ARTICLE as PrixHT, TAUX_TVA as TVA FROM ARTICLE, TVA WHERE TVA.ID_TVA = ARTICLE.ID_TVA";
}

String^ CL_Client::modifier()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ CL_Client::supprimer(String^ id)
{
    return "DELETE FROM CLIENT WHERE ID_CLIENT = '"+id+"'";
}
