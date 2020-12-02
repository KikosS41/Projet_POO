#pragma once
using namespace System;

ref class CL_Client
{
public:
	String^ creer(String^, String^, String^, String^, String^, String^);
	String^ afficher();
	String^ modifier();
	String^ supprimer();
};

