#include "CL_commande.h"

String^ CL_commande::ajouter1(String^ ID_DATELIVRAISON, String^ ID_DATEEMISSION, String^ ID_DATEDESOLDE, String^ dater, String^ moyenr,  String^IDClient, String^ refcommande)
{
    return"call commande("+ ID_DATELIVRAISON +","+ ID_DATEEMISSION +"," + ID_DATEDESOLDE +"," + dater +"," + moyenr +"," + IDClient +"," + refcommande +")";
}

String^ CL_commande::ajouter2(String^ ID_COMMANDE, String^ID_ARTICLE, String^ QTT, String^TAUX_TVA)
{
    return"call prix('"+ ID_COMMANDE +"','"+ ID_ARTICLE +"','"+ QTT +"','"+ TAUX_TVA +"')";
}

String^ CL_commande::supprimer1(String^ id)
{
    return"DELETE FROM contient WHERE ID_COMMANDE ='"+ id +"'";
}

String^ CL_commande::supprimer2(String^ id)
{
    return"DELETE FROM commande WHERE ID ='" + id + "'";

}

