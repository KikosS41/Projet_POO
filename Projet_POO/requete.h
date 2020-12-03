#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace MySql::Data::MySqlClient;

ref class requete
{
private :

	String^ cnx = "server=127.0.0.1;user id=root;persistsecurityinfo=True;database=projet_poo;port=3308";
	
public :
	String^ recuperer(String^);
	String^ recuperer_table(String^, DataGridView^, BindingSource^);
	String^ envoyer(String^);
};

