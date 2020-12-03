#pragma once
using namespace System;

ref class CL_Personnel
{

public:
	String^ creer(String^, String^, String^, String^, String^);
	String^ afficher();
	String^ modifier();
	String^ supprimer(String^);
};