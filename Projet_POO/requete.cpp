#include "requete.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;

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

String^ requete::recuperer_table(String^ req)
{
	System::Object^ data = dataGridView1->DataSource;
	BindingSource^ bd = bindingSource1;
	Object^ dbd = bindingSource1->DataSource;
	MySqlConnection^ con = gcnew MySqlConnection(cnx);
	MySqlDataAdapter^ cmd = gcnew MySqlDataAdapter(req, con);
	DataTable^ dt = gcnew DataTable();
	cmd->Fill(dt);
	bindingSource1->DataSource = dt;
	dataGridView1->DataSource = bindingSource1;
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
