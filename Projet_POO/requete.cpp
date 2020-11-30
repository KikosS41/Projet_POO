#include "requete.h"

String^ requete::recuperer(String^ instruction)
{
	MySqlConnection^ con = gcnew MySqlConnection(cnx);
	MySqlCommand^ req = gcnew MySqlCommand(instruction, con);
	con->Open();
	MySqlDataReader^ dr = req->ExecuteReader();
	return dr->GetString(1);
}
