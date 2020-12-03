#pragma once

using namespace System;
using namespace MySql::Data::MySqlClient;

ref class requete
{
private :

	String^ cnx = "server=127.0.0.1;user id=root;persistsecurityinfo=True;database=projet_poo;port=3308";
	
public :
	String^ recuperer(String^);
	String^ recuperer_table(String^);
	String^ envoyer(String^);
};

