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
	return "Table importé";

	}
	catch (Exception^ ex) {
		return ex->Message;
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
		//messagebox de communication
		return ex->Message;
	}
}
