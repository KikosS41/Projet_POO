#include "CL_adresse_date.h"

String^ CL_adresse_date::creer_date(String^ date)
{
	return "insert into date(Date) select * FROM(SELECT '" + date  + "' as dat  from DUAL) as temp where not exists(SELECT Date FROM Date WHERE date.date = temp.dat)";
}

String^ CL_adresse_date::recup_id_date(String^ date)
{
	return "SELECT ID FROM DATE Where DATE.DATE = '" + date + "'";
}

String^ CL_adresse_date::creer_adresse(String^ adr)
{
	return "insert into adresse(Adresse) select * FROM (SELECT '" + adr + "'  as adr  from DUAL) as temp where not exists(SELECT Adresse FROM adresse WHERE adresse.Adresse = temp.adr)";
}

String^ CL_adresse_date::recup_id_adresse(String^ adr)
{
	return "SELECT ID from adresse WHERE adresse.ADRESSE = '" + adr + "'";
}
