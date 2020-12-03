#pragma once
using namespace System;

ref class CL_Client
{
public:
	String^ creer(String^, String^, String^, String^, String^, String^);
	String^ afficher(String^);
	String^ modifier();
	String^ supprimer(String^);
};