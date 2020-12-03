#pragma once

using namespace System;

ref class CL_stock
{
public:
	String^ creer_tva(String^);
	String^ creer_article(String^, String^, String^, String^);
	String^ creer_couleur(String^);
	String^ creer_nature(String^, String^);
	String^ creer_tarif(String^, String^, String^, String^, String^);

	String^ modifier_article(String^, String^, String^, String^, String^);

	String^ supprimer(String^);
};

