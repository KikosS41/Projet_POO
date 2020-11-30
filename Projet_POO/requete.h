#pragma once

using namespace System;
using namespace MySql::Data::MySqlClient;

ref class requete
{
private :
	String^ cnx = "Server=localhost\\phpmyadmin;Uid=root;Pwd=;database=projet_poo";
	
public :
	String^ recuperer(String^);
};

