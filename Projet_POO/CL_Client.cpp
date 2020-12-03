#include "CL_Client.h"

String^ CL_Client::creer(String^ adr_liv, String^ adr_fac, String^ dat_ann, String^ dat_1er, String^ nom, String^ prenom)
{
return "INSERT INTO CLIENT(ID_ADRESSELIVRAISON, ID_ADRESSEFACTURATION, ID_DATENAISSANCE, ID_DATE1ER, NOM, PRENOM) VALUES ((SELECT ID from adresse WHERE adresse.ADRESSE = '" + adr_liv + "'), (SELECT ID from adresse WHERE adresse.ADRESSE = '" + adr_fac + "'), (SELECT ID FROM DATE Where DATE.DATE = '" + dat_ann + "'), (SELECT ID FROM DATE Where DATE.DATE = '" + dat_1er + "'), '" + nom + "', '" + prenom + "')";

}

String^ CL_Client::modifier(String^ adrliv, String^ adrfac, String^ datenai, String^ date1er, String^ nom, String^ prenom, String^ id)
{
 return "UPDATE CLIENT SET ID_ADRESSELIVRAISON(SELECT ID from adresse WHERE adresse.ADRESSE = '" + adrliv + "'), ID_ADRESSEFACTURATION(SELECT ID from adresse WHERE adresse.ADRESSE = '" + adrfac + "'), ID_DATENAISSANCE = (SELECT ID FROM DATE Where DATE.DATE = '" + datenai + "'), ID_DATE1ER = (SELECT ID FROM DATE Where DATE.DATE = '" + date1er + "'), NOM = '" + nom + "', PRENOM = '" + prenom + "' WHERE ID = '" + id + "'";
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

String^ CL_Client::recuperer_date_de_naissance(String^ id)
{
    return "SELECT date from DATE inner join client ON date.ID = client.ID_DATENAISSANCE WHERE client.ID = '" + id + "'";
}

String^ CL_Client::recuperer_date_de_1er_commande(String^ id ) 
{
    return "SELECT date from DATE inner join client ON date.ID = client.ID_DATE1ER WHERE client.ID = '" + id + "'";
}

String^ CL_Client::recuperer_adr_fac(String^ id)
{
   return "SELECT adresse from adresse inner join client ON adresse.ID = client.ID_ADRESSEFACTURATION WHERE client.ID = '" + id + "'";
}

String^ CL_Client::recuperer_adr_liv(String^ id)
{
    return "SELECT adresse from adresse inner join client ON adresse.ID = client.ID_ADRESSELIVRAISON WHERE client.ID = '" + id + "'";
}

String^ CL_Client::recuperer_tout()
{
    return "SELECT client.ID as ID, client.nom as nom, client.prenom as prenom, adresselivraison.adresse as adresse_Livraison, adressefacturation.adresse as Adresse_Facturation, date1er.date as date1er, date_naissance.date as Date_Naissance from ((((client inner join adresse as adresselivraison on client.id_adresselivraison = adresselivraison.id) inner join date as date_naissance on client.ID_datenaissance = date_naissance.ID) inner join adresse as adressefacturation on client.id_adressefacturation = adressefacturation.id) inner join date as date1er on client.ID_date1er = date1er.ID) ";
}
