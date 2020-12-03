#pragma once
using namespace System;

ref class CL_Personnel
{

public:
	String^ creer(String^, String^, String^, String^, String^);
	String^ modifier(String^, String^, String^, String^, String^, String^);
	String^ supprimer(String^);
	String^ recuperer_nom(int);
	String^ recuperer_prenom(int);
	String^ recuperer_sup(int);
	String^ recuperer_date_emb(int);
	String^ recuperer_adr(int);
	String^ recuperer_tout();
	
};

