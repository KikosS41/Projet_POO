#include "CL_Statistique.h"

String^ CL_Statistique::panier_moyen()
{
	return "SELECT AVG(PRIX_TTC_COMMANDE) FROM commande";
}

String^ CL_Statistique::chiffre_daffaire_sur_un_mois(String^ mois)
{
	return "SELECT SUM(prix_ttc) FROM commande INNER JOIN date WHERE commande.dateemission = date.ID_DATE and MONTH(date.date) = " + mois;
}

String^ CL_Statistique::produit_sous_le_seuil_de_reaprovisionnement()
{
	return "SELECT Nom_article from article WHERE stock_article < seuil_reapro";
}

String^ CL_Statistique::montant_total_des_achats_pour_un_client(String^ nom, String^ prenom)
{
	return "SELECT SUM(prix_ttc) FROM commande INNER JOIN client WHERE commande.id_client = client.id_client And Client.nom = " + nom + " Client.prenom = " + prenom;
}

String^ CL_Statistique::top10_articles_les_plus_vendus()
{
	return "SELECT TOP 10 Nom_Article FROM Articles INNER JOIN Contient ON Articles.ID_Articles = Contient.ID_Articles ORDER BY Quantité_COMMANDEE DESC";
}

String^ CL_Statistique::top10_articles_les_moins_vendus()
{
	return "SELECT TOP 10 Nom_Article FROM Articles INNER JOIN Contient ON Articles.ID_Articles = Contient.ID_Articles ORDER BY Quantité_COMMANDEE ASC ;";
}
