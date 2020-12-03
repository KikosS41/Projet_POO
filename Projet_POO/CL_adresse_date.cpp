#include "CL_adresse_date.h"

String^ CL_adresse_date::creer_date(String^ date)
{
	return "insert into date(Date) select * FROM(SELECT '" + date  + "' as dat  from DUAL) as temp where not exists(SELECT Date FROM Date WHERE date.date = temp.dat)";
}

String^ CL_adresse_date::creer_adresse(String^ adr)
{
	return "insert into adresse(Adresse) select * FROM (SELECT '" + adr + "'  as adr  from DUAL) as temp where not exists(SELECT Adresse FROM adresse WHERE adresse.Adresse = temp.adr)";
}
