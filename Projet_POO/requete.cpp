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
		resultat += " ; ";
	}
	con->Close();
	dr->Close();
	return resultat;

	}
	catch (Exception^ ex) {
		return "La connextion a échouée.\r\n Erreur :" + ex->Message + "\r\n";
	}
}

String^ requete::recuperer_table(String^ req,DataGridView^ dataGridView1, BindingSource^ bindingSource1)
{
	try {
	System::Object^ data = dataGridView1->DataSource;
	BindingSource^ bd = bindingSource1;
	Object^ dbd = bindingSource1->DataSource;
	MySqlConnection^ con = gcnew MySqlConnection(cnx);
	MySqlDataAdapter^ cmd = gcnew MySqlDataAdapter(req, con);
	DataTable^ dt = gcnew DataTable();
	cmd->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
	return "Table importé" + "\r\n";

	}
	catch (Exception^ ex) {
		return "Une erreur est survenue lors de l'importation de la table.\r\n Erreur :" + ex->Message + "\r\n";
	}
}

String^ requete::envoyer(String^instruction)
{
	try {
	MySqlConnection^ con = gcnew MySqlConnection(cnx);
	MySqlCommand^ req = gcnew MySqlCommand(instruction, con);
	con->Open();
	int^ dr = req->ExecuteNonQuery();
	return Convert::ToString(dr);
	con->Close();
	}
	catch (Exception^ ex) {
		return "Une erreur est survenue lors de l'envoie des données.\r\n Erreur : " + ex->Message + "\r\n";
	}
}
