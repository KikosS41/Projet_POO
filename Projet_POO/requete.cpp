#include "requete.h"

String^ requete::recuperer(String^ instruction)
{
	MySqlConnection^ con = gcnew MySqlConnection(cnx);
	MySqlCommand^ req = gcnew MySqlCommand(instruction, con);
	con->Open();
	MySqlDataReader^ dr = req->ExecuteReader();
	int i = 1;
	String^ resultat = "";
	while (dr->Read()) {
		resultat += dr->GetString(i);
		i++;
		if (dr->GetString(i) != "") {
			resultat += ", ";
		}
	}
	return resultat;
}
