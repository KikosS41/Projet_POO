#include "CL_Statistique.h"

String^ CL_Statistique::panier_moyen()
{
	return "SELECT AVG(PRIX_TTC) FROM commande";
}

String^ CL_Statistique::chiffre_daffaire_sur_un_mois(String^ mois)
{
	return "SELECT SUM(prix_ttc) FROM commande INNER JOIN date WHERE commande.dateemission = date.ID_DATE and MONTH(date.date) = " + mois;
}

String^ CL_Statistique::produit_sous_le_seuil_de_reaprovisionnement()
{
	return "SELECT NOM FROM ARTICLE WHERE QUANTITE < SEUIL_REAPPROVISIONEMENT";
}

String^ CL_Statistique::montant_total_des_achats_pour_un_client(String^ nom, String^ prenom)
{
	return "SELECT SUM(commande.prix_ttc) FROM commande INNER JOIN client ON COMMANDE.ID_CLIENT = CLIENT.ID WHERE Client.nom = " + nom + " AND Client.prenom = " + prenom;
}

String^ CL_Statistique::top10_articles_les_plus_vendus()
{
	return "SELECT TOP 10 Nom_Article FROM Articles INNER JOIN Contient ON Articles.ID_Articles = Contient.ID_Articles ORDER BY Quantité_COMMANDEE DESC";
}

String^ CL_Statistique::top10_articles_les_moins_vendus()
{
	return "SELECT TOP 10 Nom_Article FROM Articles INNER JOIN Contient ON Articles.ID_Articles = Contient.ID_Articles ORDER BY Quantité_COMMANDEE ASC ;";
}

String^ CL_Statistique::valeur_commerciale()
{
	return "SELECT SUM(PRIX * ARTICLE.QUANTITE) FROM ARTICLE INNER JOIN TARIF ON ARTICLE.ID = TARIF.ID_ARTICLE";
}

String^ CL_Statistique::valeur_achat()
{
	return "SELECT SUM(PRIX*ARTICLE.QUANTITE*(TVA.TAUX_TVA+1)) FROM ((ARTICLE INNER JOIN TARIF ON ARTICLE.ID = TARIF.ID_ARTICLE) INNER JOIN TVA ON ARTICLE.ID_TVA = TVA.ID)";
}

String^ CL_Statistique::variation_valeur()
{
	throw gcnew System::NotImplementedException();
	// TODO: insérer une instruction return ici
}
