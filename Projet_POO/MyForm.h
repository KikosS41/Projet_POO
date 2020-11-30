#pragma once

#include "requete.h"

namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ creer;
	protected:
	private: System::Windows::Forms::Button^ modifier;
	private: System::Windows::Forms::Button^ supprimer;
	private: System::Windows::Forms::Button^ afficher;
	private: System::Windows::Forms::RadioButton^ personnel;
	private: System::Windows::Forms::RadioButton^ client;
	private: System::Windows::Forms::RadioButton^ commande;
	private: System::Windows::Forms::RadioButton^ stock;
	private: System::Windows::Forms::RadioButton^ statistique;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->creer = (gcnew System::Windows::Forms::Button());
			this->modifier = (gcnew System::Windows::Forms::Button());
			this->supprimer = (gcnew System::Windows::Forms::Button());
			this->afficher = (gcnew System::Windows::Forms::Button());
			this->personnel = (gcnew System::Windows::Forms::RadioButton());
			this->client = (gcnew System::Windows::Forms::RadioButton());
			this->commande = (gcnew System::Windows::Forms::RadioButton());
			this->stock = (gcnew System::Windows::Forms::RadioButton());
			this->statistique = (gcnew System::Windows::Forms::RadioButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// creer
			// 
			this->creer->Location = System::Drawing::Point(391, 44);
			this->creer->Name = L"creer";
			this->creer->Size = System::Drawing::Size(143, 29);
			this->creer->TabIndex = 0;
			this->creer->Text = L"Créer";
			this->creer->UseVisualStyleBackColor = true;
			this->creer->Visible = false;
			// 
			// modifier
			// 
			this->modifier->Location = System::Drawing::Point(391, 79);
			this->modifier->Name = L"modifier";
			this->modifier->Size = System::Drawing::Size(143, 29);
			this->modifier->TabIndex = 1;
			this->modifier->Text = L"Modifier";
			this->modifier->UseVisualStyleBackColor = true;
			this->modifier->Visible = false;
			// 
			// supprimer
			// 
			this->supprimer->Location = System::Drawing::Point(391, 114);
			this->supprimer->Name = L"supprimer";
			this->supprimer->Size = System::Drawing::Size(143, 29);
			this->supprimer->TabIndex = 2;
			this->supprimer->Text = L"Supprimer";
			this->supprimer->UseVisualStyleBackColor = true;
			this->supprimer->Visible = false;
			// 
			// afficher
			// 
			this->afficher->Location = System::Drawing::Point(391, 9);
			this->afficher->Name = L"afficher";
			this->afficher->Size = System::Drawing::Size(143, 29);
			this->afficher->TabIndex = 3;
			this->afficher->Text = L"Afficher";
			this->afficher->UseVisualStyleBackColor = true;
			this->afficher->Visible = false;
			this->afficher->Click += gcnew System::EventHandler(this, &MyForm::afficher_Click);
			// 
			// personnel
			// 
			this->personnel->AutoSize = true;
			this->personnel->Location = System::Drawing::Point(13, 13);
			this->personnel->Name = L"personnel";
			this->personnel->Size = System::Drawing::Size(100, 21);
			this->personnel->TabIndex = 4;
			this->personnel->TabStop = true;
			this->personnel->Text = L"Personnels";
			this->personnel->UseVisualStyleBackColor = true;
			this->personnel->CheckedChanged += gcnew System::EventHandler(this, &MyForm::personnel_CheckedChanged);
			// 
			// client
			// 
			this->client->AutoSize = true;
			this->client->Location = System::Drawing::Point(12, 40);
			this->client->Name = L"client";
			this->client->Size = System::Drawing::Size(71, 21);
			this->client->TabIndex = 5;
			this->client->TabStop = true;
			this->client->Text = L"Clients";
			this->client->UseVisualStyleBackColor = true;
			this->client->CheckedChanged += gcnew System::EventHandler(this, &MyForm::client_CheckedChanged);
			// 
			// commande
			// 
			this->commande->AutoSize = true;
			this->commande->Location = System::Drawing::Point(12, 67);
			this->commande->Name = L"commande";
			this->commande->Size = System::Drawing::Size(107, 21);
			this->commande->TabIndex = 6;
			this->commande->TabStop = true;
			this->commande->Text = L"Commandes";
			this->commande->UseVisualStyleBackColor = true;
			this->commande->CheckedChanged += gcnew System::EventHandler(this, &MyForm::commande_CheckedChanged);
			// 
			// stock
			// 
			this->stock->AutoSize = true;
			this->stock->Location = System::Drawing::Point(12, 94);
			this->stock->Name = L"stock";
			this->stock->Size = System::Drawing::Size(71, 21);
			this->stock->TabIndex = 7;
			this->stock->TabStop = true;
			this->stock->Text = L"Stocks";
			this->stock->UseVisualStyleBackColor = true;
			this->stock->CheckedChanged += gcnew System::EventHandler(this, &MyForm::stock_CheckedChanged);
			// 
			// statistique
			// 
			this->statistique->AutoSize = true;
			this->statistique->Location = System::Drawing::Point(12, 121);
			this->statistique->Name = L"statistique";
			this->statistique->Size = System::Drawing::Size(102, 21);
			this->statistique->TabIndex = 8;
			this->statistique->TabStop = true;
			this->statistique->Text = L"Statistiques";
			this->statistique->UseVisualStyleBackColor = true;
			this->statistique->CheckedChanged += gcnew System::EventHandler(this, &MyForm::statistique_CheckedChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 169);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"label1";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 10;
			this->label2->Text = L"label2";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 226);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 11;
			this->label3->Text = L"label3";
			this->label3->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 254);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"label4";
			this->label4->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 282);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 17);
			this->label5->TabIndex = 13;
			this->label5->Text = L"label5";
			this->label5->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(338, 166);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(251, 22);
			this->textBox1->TabIndex = 14;
			this->textBox1->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(338, 194);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(251, 22);
			this->textBox2->TabIndex = 15;
			this->textBox2->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(338, 223);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(251, 22);
			this->textBox3->TabIndex = 16;
			this->textBox3->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(338, 251);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(251, 22);
			this->textBox4->TabIndex = 17;
			this->textBox4->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(338, 279);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(251, 22);
			this->textBox5->TabIndex = 18;
			this->textBox5->Visible = false;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(338, 308);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(251, 22);
			this->textBox6->TabIndex = 19;
			this->textBox6->Visible = false;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(338, 337);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(251, 22);
			this->textBox7->TabIndex = 20;
			this->textBox7->Visible = false;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(338, 366);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(251, 22);
			this->textBox8->TabIndex = 21;
			this->textBox8->Visible = false;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(338, 395);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(251, 22);
			this->textBox9->TabIndex = 22;
			this->textBox9->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 311);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 23;
			this->label6->Text = L"label6";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 340);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 24;
			this->label7->Text = L"label7";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 369);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 17);
			this->label8->TabIndex = 25;
			this->label8->Text = L"label8";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 398);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 17);
			this->label9->TabIndex = 26;
			this->label9->Text = L"label9";
			this->label9->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(630, 166);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(449, 276);
			this->dataGridView1->TabIndex = 27;
			this->dataGridView1->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 425);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 17);
			this->label10->TabIndex = 28;
			this->label10->Text = L"label10";
			this->label10->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(338, 422);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(251, 22);
			this->textBox10->TabIndex = 29;
			this->textBox10->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1091, 456);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->statistique);
			this->Controls->Add(this->stock);
			this->Controls->Add(this->commande);
			this->Controls->Add(this->client);
			this->Controls->Add(this->personnel);
			this->Controls->Add(this->afficher);
			this->Controls->Add(this->supprimer);
			this->Controls->Add(this->modifier);
			this->Controls->Add(this->creer);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void personnel_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	creer->Visible = true;
	modifier->Visible = true;
	supprimer->Visible = true;
	afficher->Visible = true;

	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = false;
	label6->Visible = false;
	label7->Visible = false;
	label8->Visible = false;
	label9->Visible = false;
	label10->Visible = false;

	textBox1->Visible = true;
	textBox2->Visible = true;
	textBox3->Visible = true;
	textBox4->Visible = true;
	textBox5->Visible = false;
	textBox6->Visible = false;
	textBox7->Visible = false;
	textBox8->Visible = false;
	textBox9->Visible = false;
	textBox10->Visible = false;

	dataGridView1->Visible = true;

	label1->Text = "Nom :";
	label2->Text = "Prénom :";
	label3->Text = "Supérieur :";
	label4->Text = "Date d'embauche :";

}

private: System::Void client_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	creer->Visible = true;
	modifier->Visible = true;
	supprimer->Visible = true;
	afficher->Visible = true;

	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = false;
	label5->Visible = false;
	label6->Visible = false;
	label7->Visible = false;
	label8->Visible = false;
	label9->Visible = false;
	label10->Visible = false;

	textBox1->Visible = true;
	textBox2->Visible = true;
	textBox3->Visible = true;
	textBox4->Visible = false;
	textBox5->Visible = false;
	textBox6->Visible = false;
	textBox7->Visible = false;
	textBox8->Visible = false;
	textBox9->Visible = false;
	textBox10->Visible = false;

	dataGridView1->Visible = true;
	
	label1->Text = "Nom :";
	label2->Text = "Prénom :";
	label3->Text = "Date de naissance :";
}
private: System::Void commande_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	creer->Visible = true;
	modifier->Visible = true;
	supprimer->Visible = true;
	afficher->Visible = true;

	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;
	label6->Visible = true;
	label7->Visible = true;
	label8->Visible = true;
	label9->Visible = true;
	label10->Visible = true;

	textBox1->Visible = true;
	textBox2->Visible = true;
	textBox3->Visible = true;
	textBox4->Visible = true;
	textBox5->Visible = true;
	textBox6->Visible = true;
	textBox7->Visible = true;
	textBox8->Visible = true;
	textBox9->Visible = true;
	textBox10->Visible = true;

	dataGridView1->Visible = false;

	label1->Text = "Référence :";
	label2->Text = "Date de livraison prévue :";
	label3->Text = "Date d'émission :";
	label4->Text = "Date de paiement :";
	label5->Text = "Moyen de paiement :";
	label6->Text = "Date du réglement de solde :";
	label7->Text = "Prix (la resime se fait auto) par article :";
	label8->Text = "Prix HT :";
	label9->Text = "Prix TTC :";
	label10->Text = "Prix TVA :";
}
private: System::Void stock_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	creer->Visible = true;
	modifier->Visible = true;
	supprimer->Visible = true;
	afficher->Visible = true;

	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;
	label6->Visible = true;
	label7->Visible = true;
	label8->Visible = true;
	label9->Visible = false;
	label10->Visible = false;

	textBox1->Visible = true;
	textBox2->Visible = true;
	textBox3->Visible = true;
	textBox4->Visible = true;
	textBox5->Visible = true;
	textBox6->Visible = true;
	textBox7->Visible = true;
	textBox8->Visible = true;
	textBox9->Visible = false;
	textBox10->Visible = false;

	dataGridView1->Visible = false;

	label1->Text = "Prix HT :";
	label2->Text = "Référence :";
	label3->Text = "Désignation :";
	label4->Text = "Quantité :";
	label5->Text = "Seuil de réapprovisionnement :";
	label6->Text = "Taux TVA :";
	label7->Text = "Nature :";
	label8->Text = "Couleur :";
}
private: System::Void statistique_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	creer->Visible = false;
	modifier->Visible = false;
	supprimer->Visible = false;
	afficher->Visible = true;

	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;
	label6->Visible = true;
	label7->Visible = true;
	label8->Visible = true;
	label9->Visible = true;
	label10->Visible = true;

	textBox1->Visible = true;
	textBox2->Visible = true;
	textBox3->Visible = true;
	textBox4->Visible = true;
	textBox5->Visible = true;
	textBox6->Visible = true;
	textBox7->Visible = true;
	textBox8->Visible = true;
	textBox9->Visible = true;
	textBox10->Visible = true;

	dataGridView1->Visible = true;

	label1->Text = "Panier moyen (après remise) :";
	label2->Text = "Chiffre d'affaire sur un mois choisi :";
	label3->Text = "Produits sous le seuil de réapprovisionnement :";
	label4->Text = "Nom client :";
	label5->Text = "Prenom client :";
	label6->Text = "Les 10 articles les plus vendus :";
	label7->Text = "Les 10 articles les moins vendus :";
	label8->Text = "Valeur commerciale du stock :";
	label9->Text = "Valeur d’achat du stock :";
	label10->Text = "Variations de valeurs commerciales :";

}


private: System::Void afficher_Click(System::Object^ sender, System::EventArgs^ e) {
	if (statistique->Checked)
	{
		requete req;

		/* requete 1 : */
		textBox1->Text = req.recuperer("SELECT AVG(prix_ttc) FROM commande");

		/* requete 2 : */
		textBox2->Text = req.recuperer("SELECT SUM(prix_ttc) FROM commande INNER JOIN date WHERE commande.dateemission = date.ID_DATE and MONTH(date.date) = " + textBox2->Text);
		
		/* requete 3 : */
		textBox3->Text = req.recuperer("SELECT Nom_article from article WHERE stock_article < seuil_reapro");
		
		/* requete 4 : */
		textBox4->Text = req.recuperer("SELECT SUM(prix_ttc) FROM commande INNER JOIN client WHERE commande.id_client = client.id_client And Client.nom = " + textBox4->Text + " Client.prenom = " + textBox5->Text);
		
		/* requete 5 : */
		textBox6->Text = req.recuperer("SELECT TOP 10 Nom_Article FROM Articles INNER JOIN Contient ON Articles.ID_Articles = Contient.ID_Articles ORDER BY Quantité_COMMANDEE DESC ;");
		
		/* requete 6 : */
		textBox7->Text = req.recuperer("SELECT SUM(prix_ttc) FROM commande INNER JOIN client WHERE commande.id_client = client.id_client And Client.nom = " + textBox4->Text + " Client.prenom = " + textBox5->Text);
	}
}
};
}
