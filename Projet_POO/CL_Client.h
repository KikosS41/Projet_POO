#pragma once
using namespace System;

ref class CL_Client
{
public:
	String^ creer(String^, String^, String^, String^, String^, String^);
	String^ modifier(String^, String^, String^, String^, String^, String^, String^);
	String^ supprimer(String^);
	String^ recuperer_nom(String^);
	String^ recuperer_prenom(String^);
	String^ recuperer_date_de_naissance(String^);
	String^ recuperer_date_de_1er_commande(String^);
	String^ recuperer_adr_fac(String^);
	String^ recuperer_adr_liv(String^);
	String^ recuperer_tout();
};

