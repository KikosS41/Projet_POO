#include "requete.h"

String^ requete::recuperer(String^ instruction)
{
	try {
	MySqlConnection^ con = gcnew MySqlConnection(cnx);
	MySqlCommand^ req = gcnew MySqlCommand(instruction, con);
	con->Open();
	MySqlDataReader^ dr = req->ExecuteReader();
	int i = 0;
	String^ resultat;
	while (dr->Read()) {
		resultat += dr->GetString(i);
		i++;
	}
	return resultat;
	con->Close();
	}
	catch (Exception^ ex) {
		//messagebox de communication
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
	//messagebox de communication
	}
	catch (Exception^ ex) {
		//messagebox de communication
		return ex->Message;
	}
}
