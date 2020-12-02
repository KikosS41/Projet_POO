#include "CL_Personnel.h"

String^ CL_Personnel::creer(String^ id_adr, String^ id_sup, String^ date_emb, String^ nom, String^ prenom)
{
    return "INSERT INTO PERSONNEL(ID_ADRESSE, ID_superieur, ID_DATEEMBAUCHE, NOM, PRENOM) VALUES ('" + id_adr + "', '" + id_sup + "', '" + date_emb + "', '" + nom + "', '" + prenom + "')";
}

String^ CL_Personnel::afficher()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ CL_Personnel::modifier()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ CL_Personnel::supprimer()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}
