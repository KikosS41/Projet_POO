#pragma once
using namespace System;

ref class CL_Statistique
{
public:
	String^ panier_moyen();
	String^ chiffre_daffaire_sur_un_mois(String^);
	String^ produit_sous_le_seuil_de_reaprovisionnement();
	String^ montant_total_des_achats_pour_un_client(String^, String^);
	String^ top10_articles_les_plus_vendus();
	String^ top10_articles_les_moins_vendus();
	String^ valeur_commerciale();
	String^ valeur_achat();
	String^ variation_valeur();
};

