#include "CL_Personnel.h"

String^ CL_Personnel::creer(String^ adr, String^ id_sup, String^ date_emb, String^ nom, String^ prenom)
{
    return "INSERT INTO PERSONNEL(ID_ADRESSE, ID_superieur, ID_DATEEMBAUCHE, NOM, PRENOM) VALUES ((SELECT ID FROM ADRESSE Where ADRESSE.ADRESSE = '"+ adr + "'), '" + id_sup + "', (SELECT ID FROM DATE Where DATE.DATE ='"+ date_emb + "'), '"+nom+"', '"+prenom+"')";
}

String^ CL_Personnel::modifier()
{
    throw gcnew System::NotImplementedException();
    // TODO: insérer une instruction return ici
}

String^ CL_Personnel::supprimer(String^ id)
{
    return "DELETE FROM PERSONNEL WHERE ID_PERSONNEL = '"+id+"'";
}

String^ CL_Personnel::recuperer_idmax()
{
    return "SELECT MAX(ID) FROM PERSONNEL";
}

String^ CL_Personnel::recuperer_nom(int id)
{
    return "SELECT NOM FROM PERSONNEL WHERE PERSONNEL.ID = " + id;
}

String^ CL_Personnel::recuperer_prenom(int id)
{
    return "SELECT PRENOM FROM PERSONNEL WHERE PERSONNEL.ID = " + id;
}

String^ CL_Personnel::recuperer_sup(int id)
{
    return "SELECT ID_SUPEREUR FROM client WHERE client.ID = " + id;
}

String^ CL_Personnel::recuperer_date_emb(int id)
{
    return "SELECT date from DATE inner join personnel ON date.ID = personnel.ID_DATEEMBAUCHE WHERE personnel.ID = '" + id + "'";
}

String^ CL_Personnel::recuperer_adr(int id)
{
    return "SELECT adresse from adresse inner join personnel ON adresse.ID = personnel.ID_ADRESSE WHERE personnel.ID = '" + id + "'";
}

String^ CL_Personnel::recuperer_tout()
{
    return "SELECT personnel.nom as nom, personnel.prenom as prenom, adresse.adresse as adresse, date.date as dateembauche from((personnel inner join adresse on personnel.id_adresse = adresse.id) inner join date on personnel.ID_dateembauche = date.ID)";
}
