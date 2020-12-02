#include "CL_Client.h"

String^ CL_Client::creer(String^ id_adr_liv, String^ id_adr_fac, String^ id_dat_ann, String^ id_dat_1er, String^ nom, String^ prenom)
{
return "INSERT INTO CLIENT(ID_ADRESSELIVRAISON, ID_ADRESSEFACTURATION, ID_DATENAISSANCE, ID_DATE1ER, NOM, PRENOM) VALUES ('" + id_adr_liv + "', '" + id_adr_fac + "', '" + id_dat_ann + "', '" + id_dat_1er + "', '" + nom + "', '" + prenom + "')";

}

String^ CL_Client::afficher()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ CL_Client::modifier()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ CL_Client::supprimer()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}
