#pragma once
#include "requete.h"

using namespace System;

ref class CL_adresse_date
{
public:
	String^ creer_date(String^);
	String^ recup_id_date(String^);
	String^ creer_adresse(String^);
	String^ recup_id_adresse(String^);
};

