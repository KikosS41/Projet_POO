#include "requete.h"

String^ requete::recuperer(String^ instruction)
{
	try {
	MySqlConnection^ con = gcnew MySqlConnection(cnx);
	MySqlCommand^ req = gcnew MySqlCommand(instruction, con);
	con->Open();
	MySqlDataReader^ dr = req->ExecuteReader();
	String^ resultat;

	while (dr->Read()) {
		resultat += dr[0];
	}
	con->Close();
	dr->Close();
	return resultat;

	}
	catch (Exception^ ex) {
		return ex->Message;
	}
}

String^ requete::envoyer(String^instruction)
{
	try{
	MySqlConnection^ con = gcnew MySqlConnection(cnx);
	MySqlCommand^ req = gcnew MySqlCommand(instruction, con);
	con->Open();
	int^ dr = req->ExecuteNonQuery();
	return Convert::ToString(dr);
	con->Close();
	}
	catch (Exception^ ex) {
		//messagebox de communication
		return ex->Message;
	}
}



