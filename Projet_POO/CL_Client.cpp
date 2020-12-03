#include "CL_Client.h"

String^ CL_Client::creer(String^ adr_liv, String^ adr_fac, String^ dat_ann, String^ dat_1er, String^ nom, String^ prenom)
{
return "INSERT INTO CLIENT(ID_ADRESSELIVRAISON, ID_ADRESSEFACTURATION, ID_DATENAISSANCE, ID_DATE1ER, NOM, PRENOM) VALUES ((SELECT ID from adresse WHERE adresse.ADRESSE = '" + adr_liv + "'), (SELECT ID from adresse WHERE adresse.ADRESSE = '" + adr_fac + "'), (SELECT ID FROM DATE Where DATE.DATE = '" + dat_ann + "'), (SELECT ID FROM DATE Where DATE.DATE = '" + dat_1er + "'), '" + nom + "', '" + prenom + "')";

}

String^ CL_Client::afficher(String^)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ CL_Client::modifier(String^)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ CL_Client::supprimer(String^ id)
{
    return "DELETE FROM CLIENT WHERE ID_CLIENT = '"+id+"'";
}

String^ CL_Client::recuperer_nom(String^id)
{
    return "SELECT NOM FROM client WHERE client.ID = "+id;
}

String^ CL_Client::recuperer_prenom(String^id)
{
    return "SELECT PRENOM FROM client WHERE client.ID = "+id;
}

String^ CL_Client::recuperer_date_de_naissance(String^)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ CL_Client::recuperer_date_de_1er_commande(String^) 
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ CL_Client::recuperer_adr_fac(String^)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ CL_Client::recuperer_adr_liv(String^)
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}
