#pragma once

#include "requete.h"
#include "CL_Personnel.h"
#include "CL_adresse_date.h"
#include "CL_Client.h"
#include "CL_commande.h"
#include "CL_stock.h"
#include "CL_Statistique.h"


namespace ProjetPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Description r�sum�e de MyForm
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
		/// Nettoyage des ressources utilis�es.
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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ communication;
	private: System::Windows::Forms::Label^ labelID;
	private: System::Windows::Forms::TextBox^ textBoxID;
	private: System::Windows::Forms::GroupBox^ groupBoxID;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::GroupBox^ groupBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::GroupBox^ groupBox12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox12;
	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->communication = (gcnew System::Windows::Forms::TextBox());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxID = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBoxID->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->SuspendLayout();
			// 
			// creer
			// 
			this->creer->Location = System::Drawing::Point(391, 44);
			this->creer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->creer->Name = L"creer";
			this->creer->Size = System::Drawing::Size(143, 30);
			this->creer->TabIndex = 0;
			this->creer->Text = L"Cr�er";
			this->creer->UseVisualStyleBackColor = true;
			this->creer->Visible = false;
			this->creer->Click += gcnew System::EventHandler(this, &MyForm::creer_Click);
			// 
			// modifier
			// 
			this->modifier->Location = System::Drawing::Point(391, 79);
			this->modifier->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->modifier->Name = L"modifier";
			this->modifier->Size = System::Drawing::Size(143, 30);
			this->modifier->TabIndex = 1;
			this->modifier->Text = L"Modifier";
			this->modifier->UseVisualStyleBackColor = true;
			this->modifier->Visible = false;
			this->modifier->Click += gcnew System::EventHandler(this, &MyForm::modifier_Click);
			// 
			// supprimer
			// 
			this->supprimer->Location = System::Drawing::Point(391, 114);
			this->supprimer->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->supprimer->Name = L"supprimer";
			this->supprimer->Size = System::Drawing::Size(143, 30);
			this->supprimer->TabIndex = 2;
			this->supprimer->Text = L"Supprimer";
			this->supprimer->UseVisualStyleBackColor = true;
			this->supprimer->Visible = false;
			this->supprimer->Click += gcnew System::EventHandler(this, &MyForm::supprimer_Click);
			// 
			// afficher
			// 
			this->afficher->Location = System::Drawing::Point(391, 9);
			this->afficher->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->afficher->Name = L"afficher";
			this->afficher->Size = System::Drawing::Size(143, 30);
			this->afficher->TabIndex = 3;
			this->afficher->Text = L"Afficher";
			this->afficher->UseVisualStyleBackColor = true;
			this->afficher->Visible = false;
			this->afficher->Click += gcnew System::EventHandler(this, &MyForm::afficher_Click);
			// 
			// personnel
			// 
			this->personnel->AutoSize = true;
			this->personnel->Location = System::Drawing::Point(13, 14);
			this->personnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->client->Location = System::Drawing::Point(12, 39);
			this->client->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->commande->Location = System::Drawing::Point(12, 66);
			this->commande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->stock->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->statistique->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
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
			this->label1->Location = System::Drawing::Point(3, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 9;
			this->label1->Text = L"label1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(325, 9);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(251, 22);
			this->textBox1->TabIndex = 14;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(629, 166);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(449, 401);
			this->dataGridView1->TabIndex = 27;
			this->dataGridView1->Visible = false;
			// 
			// communication
			// 
			this->communication->Location = System::Drawing::Point(801, 14);
			this->communication->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->communication->Multiline = true;
			this->communication->Name = L"communication";
			this->communication->ReadOnly = true;
			this->communication->Size = System::Drawing::Size(279, 130);
			this->communication->TabIndex = 30;
			// 
			// labelID
			// 
			this->labelID->AutoSize = true;
			this->labelID->Location = System::Drawing::Point(4, 12);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(29, 17);
			this->labelID->TabIndex = 35;
			this->labelID->Text = L"ID :";
			// 
			// textBoxID
			// 
			this->textBoxID->Location = System::Drawing::Point(41, 9);
			this->textBoxID->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(63, 22);
			this->textBoxID->TabIndex = 36;
			// 
			// groupBoxID
			// 
			this->groupBoxID->Controls->Add(this->labelID);
			this->groupBoxID->Controls->Add(this->textBoxID);
			this->groupBoxID->Location = System::Drawing::Point(629, 71);
			this->groupBoxID->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBoxID->Name = L"groupBoxID";
			this->groupBoxID->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBoxID->Size = System::Drawing::Size(107, 36);
			this->groupBoxID->TabIndex = 37;
			this->groupBoxID->TabStop = false;
			this->groupBoxID->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 155);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(579, 36);
			this->groupBox1->TabIndex = 38;
			this->groupBox1->TabStop = false;
			this->groupBox1->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->textBox2);
			this->groupBox2->Location = System::Drawing::Point(12, 190);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox2->Size = System::Drawing::Size(579, 36);
			this->groupBox2->TabIndex = 39;
			this->groupBox2->TabStop = false;
			this->groupBox2->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"label2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(325, 9);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(251, 22);
			this->textBox2->TabIndex = 14;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->textBox3);
			this->groupBox3->Location = System::Drawing::Point(12, 224);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox3->Size = System::Drawing::Size(579, 36);
			this->groupBox3->TabIndex = 40;
			this->groupBox3->TabStop = false;
			this->groupBox3->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"label3";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(325, 9);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(251, 22);
			this->textBox3->TabIndex = 14;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->textBox4);
			this->groupBox4->Location = System::Drawing::Point(12, 258);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox4->Size = System::Drawing::Size(579, 36);
			this->groupBox4->TabIndex = 41;
			this->groupBox4->TabStop = false;
			this->groupBox4->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"label4";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(325, 9);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(251, 22);
			this->textBox4->TabIndex = 14;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label5);
			this->groupBox5->Controls->Add(this->textBox5);
			this->groupBox5->Location = System::Drawing::Point(12, 293);
			this->groupBox5->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox5->Size = System::Drawing::Size(579, 36);
			this->groupBox5->TabIndex = 42;
			this->groupBox5->TabStop = false;
			this->groupBox5->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 12);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 17);
			this->label5->TabIndex = 9;
			this->label5->Text = L"label5";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(325, 9);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(251, 22);
			this->textBox5->TabIndex = 14;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Controls->Add(this->textBox6);
			this->groupBox6->Location = System::Drawing::Point(12, 327);
			this->groupBox6->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox6->Size = System::Drawing::Size(579, 36);
			this->groupBox6->TabIndex = 43;
			this->groupBox6->TabStop = false;
			this->groupBox6->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(3, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 9;
			this->label6->Text = L"label6";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(325, 9);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(251, 22);
			this->textBox6->TabIndex = 14;
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label7);
			this->groupBox7->Controls->Add(this->textBox7);
			this->groupBox7->Location = System::Drawing::Point(12, 362);
			this->groupBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox7->Size = System::Drawing::Size(579, 36);
			this->groupBox7->TabIndex = 44;
			this->groupBox7->TabStop = false;
			this->groupBox7->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 12);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(46, 17);
			this->label7->TabIndex = 9;
			this->label7->Text = L"label7";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(325, 9);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(251, 22);
			this->textBox7->TabIndex = 14;
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->label8);
			this->groupBox8->Controls->Add(this->textBox8);
			this->groupBox8->Location = System::Drawing::Point(12, 396);
			this->groupBox8->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox8->Size = System::Drawing::Size(579, 36);
			this->groupBox8->TabIndex = 45;
			this->groupBox8->TabStop = false;
			this->groupBox8->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 17);
			this->label8->TabIndex = 9;
			this->label8->Text = L"label8";
			// 
			// textBox8
			// 

			this->textBox8->Location = System::Drawing::Point(325, 9);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(251, 22);
			this->textBox8->TabIndex = 14;
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->label9);
			this->groupBox9->Controls->Add(this->textBox9);
			this->groupBox9->Location = System::Drawing::Point(12, 431);
			this->groupBox9->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox9->Size = System::Drawing::Size(579, 36);
			this->groupBox9->TabIndex = 46;
			this->groupBox9->TabStop = false;
			this->groupBox9->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 12);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 17);
			this->label9->TabIndex = 9;
			this->label9->Text = L"label9";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(325, 9);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(251, 22);
			this->textBox9->TabIndex = 14;
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->label10);
			this->groupBox10->Controls->Add(this->textBox10);
			this->groupBox10->Location = System::Drawing::Point(12, 465);
			this->groupBox10->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox10->Size = System::Drawing::Size(579, 36);
			this->groupBox10->TabIndex = 47;
			this->groupBox10->TabStop = false;
			this->groupBox10->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 12);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"label10";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(325, 9);
			this->textBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(251, 22);
			this->textBox10->TabIndex = 14;
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->label11);
			this->groupBox11->Controls->Add(this->textBox11);
			this->groupBox11->Location = System::Drawing::Point(12, 500);
			this->groupBox11->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox11->Size = System::Drawing::Size(579, 36);
			this->groupBox11->TabIndex = 48;
			this->groupBox11->TabStop = false;
			this->groupBox11->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 12);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 17);
			this->label11->TabIndex = 9;
			this->label11->Text = L"label11";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(325, 9);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(251, 22);
			this->textBox11->TabIndex = 14;
			// 
			// groupBox12
			// 
			this->groupBox12->Controls->Add(this->label12);
			this->groupBox12->Controls->Add(this->textBox12);
			this->groupBox12->Location = System::Drawing::Point(12, 534);
			this->groupBox12->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox12->Size = System::Drawing::Size(579, 36);
			this->groupBox12->TabIndex = 49;
			this->groupBox12->TabStop = false;
			this->groupBox12->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 12);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 17);
			this->label12->TabIndex = 9;
			this->label12->Text = L"label12";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(325, 9);
			this->textBox12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(251, 22);
			this->textBox12->TabIndex = 14;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1091, 578);
			this->Controls->Add(this->groupBox12);
			this->Controls->Add(this->groupBox11);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBoxID);
			this->Controls->Add(this->communication);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->statistique);
			this->Controls->Add(this->stock);
			this->Controls->Add(this->commande);
			this->Controls->Add(this->client);
			this->Controls->Add(this->personnel);
			this->Controls->Add(this->afficher);
			this->Controls->Add(this->supprimer);
			this->Controls->Add(this->modifier);
			this->Controls->Add(this->creer);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBoxID->ResumeLayout(false);
			this->groupBoxID->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
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
	label5->Visible = true;
	label6->Visible = false;
	label7->Visible = false;
	label8->Visible = false;
	label9->Visible = false;
	label10->Visible = false;
	label11->Visible = false;
	label12->Visible = false;

	textBox1->Visible = true;
	textBox2->Visible = true;
	textBox3->Visible = true;
	textBox4->Visible = true;
	textBox5->Visible = true;
	textBox6->Visible = false;
	textBox7->Visible = false;
	textBox8->Visible = false;
	textBox9->Visible = false;
	textBox10->Visible = false;
	textBox11->Visible = false;
	textBox12->Visible = false;

	dataGridView1->Visible = true;

	dataGridView1->ColumnCount = 6;
	dataGridView1->Columns[0]->Name = "ID";
	dataGridView1->Columns[1]->Name = "Nom";
	dataGridView1->Columns[2]->Name = "Prénom";
	dataGridView1->Columns[3]->Name = "Supérieur";
	dataGridView1->Columns[4]->Name = "Date d'embauche";
	dataGridView1->Columns[5]->Name = "Adresse";

	label1->Text = "Nom :";
	label2->Text = "Prénom :";
	label3->Text = "Supérieur :";
	label4->Text = "Date d'embauche (YYYY-MM-DD) :";
	label5->Text = "Adresse :";
}
private: System::Void client_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	creer->Visible = true;
	modifier->Visible = true;
	supprimer->Visible = true;
	afficher->Visible = true;

	groupBoxID->Visible = true;
	groupBox1->Visible = true;
	groupBox2->Visible = true;
	groupBox3->Visible = true;
	groupBox4->Visible = true;
	groupBox5->Visible = true;
	groupBox6->Visible = true;
	groupBox7->Visible = false;
	groupBox8->Visible = false;
	groupBox9->Visible = false;
	groupBox10->Visible = false;
	groupBox11->Visible = false;
	groupBox12->Visible = false;

	dataGridView1->Visible = true;

	dataGridView1->ColumnCount = 7;
	dataGridView1->Columns[0]->Name = "ID";
	dataGridView1->Columns[1]->Name = "Nom";
	dataGridView1->Columns[2]->Name = "Prénom";
	dataGridView1->Columns[3]->Name = "Date de naissance";
	dataGridView1->Columns[4]->Name = "Date de première commande";
	dataGridView1->Columns[5]->Name = "Adresse facturation";
	dataGridView1->Columns[6]->Name = "Adresse livraison";
	
	label1->Text = "Nom :";
	label2->Text = "Prénom :";
	label3->Text = "Date de naissance :";
	label4->Text = "Date de première commande :";
	label5->Text = "Adresse facturation:";
	label6->Text = "Adresse livraison :";

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
	label11->Visible = false;
	label12->Visible = false;
	labelID->Visible = false;

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
	textBox11->Visible = false;
	textBox12->Visible = false;
	textBoxID->Visible = true;

	dataGridView1->Visible = false;

	label1->Text = "Référence :";
	label2->Text = "Date de livraison pr�vue :";
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

	groupBoxID->Visible = true;
	groupBox1->Visible = true;
	groupBox2->Visible = true;
	groupBox3->Visible = true;
	groupBox4->Visible = true;
	groupBox5->Visible = true;
	groupBox6->Visible = true;
	groupBox7->Visible = true;
	groupBox8->Visible = true;
	groupBox9->Visible = false;
	groupBox10->Visible = false;
	groupBox11->Visible = false;
	groupBox12->Visible = false;

	dataGridView1->Visible = true;

	dataGridView1->ColumnCount = 9;
	dataGridView1->Columns[0]->Name = "ID";
	dataGridView1->Columns[1]->Name = "Nom";
	dataGridView1->Columns[2]->Name = "Nature";
	dataGridView1->Columns[3]->Name = "Couleur";
	dataGridView1->Columns[4]->Name = "Quantité";
	dataGridView1->Columns[5]->Name = "Seuil de réapprovisionnement";
	dataGridView1->Columns[6]->Name = "Taux TVA";
	dataGridView1->Columns[7]->Name = "Taille lot";
	dataGridView1->Columns[8]->Name = "Prix";

	label1->Text = "Nom article :";
	label2->Text = "Nature :";
	label3->Text = "Couleur :";
	label4->Text = "Quantité :";
	label5->Text = "Seuil de réapprovisionnement :";
	label6->Text = "Taux TVA :";
	label7->Text = "Taille lot :";
	label8->Text = "Prix :";
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
	label11->Visible = false;
	label12->Visible = false;
	labelID->Visible = false;

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
	textBox11->Visible = false;
	textBox12->Visible = false;
	textBoxID->Visible = false;

	dataGridView1->Visible = true;

	dataGridView1->ColumnCount = 9;
	dataGridView1->Columns[0]->Name = "Panier moyen";
	dataGridView1->Columns[1]->Name = "Chiffre d'affaire sur un mois choisi";
	dataGridView1->Columns[2]->Name = "Produits sous le seuil de reapprovisionnement";
	dataGridView1->Columns[3]->Name = "montant total des achats pour un client";
	dataGridView1->Columns[4]->Name = "Les 10 articles les plus vendus";
	dataGridView1->Columns[5]->Name = "Les 10 articles les moins vendus";
	dataGridView1->Columns[6]->Name = "Valeur commerciale du stock";
	dataGridView1->Columns[7]->Name = "Valeur d'achat du stock";
	dataGridView1->Columns[8]->Name = "Variations de valeurs commerciales";

	label1->Text = "Panier moyen (apr�s remise) :";
	label2->Text = "Chiffre d'affaire sur un mois choisi :";
	label3->Text = "Produits sous le seuil de reapprovisionnement :";
	label4->Text = "Nom client :";
	label5->Text = "Prenom client :";
	label6->Text = "Les 10 articles les plus vendus :";
	label7->Text = "Les 10 articles les moins vendus :";
	label8->Text = "Valeur commerciale du stock :";
	label9->Text = "Valeur d'achat du stock :";
	label10->Text = "Variations de valeurs commerciales :";

}

	   requete req;
	   CL_Personnel pers;
	   CL_adresse_date ad;
	   CL_Client cli;
	   CL_stock art;
	   CL_commande com;
	   CL_Statistique stats;

private: System::Void afficher_Click(System::Object^ sender, System::EventArgs^ e) {
	if (statistique->Checked)
	{
		textBox1->Text = req.recuperer(stats.panier_moyen());
		textBox2->Text = req.recuperer(stats.chiffre_daffaire_sur_un_mois(textBox2->Text));
		textBox3->Text = req.recuperer(stats.produit_sous_le_seuil_de_reaprovisionnement());
		textBox4->Text = req.recuperer(stats.montant_total_des_achats_pour_un_client(textBox4->Text, textBox5->Text));
		textBox6->Text = req.recuperer(stats.top10_articles_les_plus_vendus());
		textBox7->Text = req.recuperer(stats.top10_articles_les_moins_vendus());
	}
	if (client->Checked) {
	}
}
private: System::Void creer_Click(System::Object^ sender, System::EventArgs^ e) {
	


	if (personnel->Checked)
	{
		req.envoyer(ad.creer_adresse(textBox5->Text));
		req.envoyer(ad.creer_date(textBox4->Text));
		
		String^ X = req.recuperer(ad.recup_id_adresse(textBox5->Text));

		communication->Text = req.envoyer(pers.creer(X, textBox3->Text, textBox4->Text, textBox1->Text, textBox2->Text));
	}
	if (client->Checked)
	{
		req.envoyer(ad.creer_adresse(textBox5->Text));
		req.envoyer(ad.creer_adresse(textBox6->Text));
		communication->Text = req.envoyer(ad.creer_date(textBox3->Text));
		req.envoyer(ad.creer_date(textBox4->Text));

		String^ Xfac = req.recuperer(ad.recup_id_adresse(textBox5->Text));
		String^ Xliv = req.recuperer(ad.recup_id_adresse(textBox6->Text));

		String^ Yanniv = req.recuperer(ad.recup_id_date(textBox3->Text));
		String^ Yachat = req.recuperer(ad.recup_id_date(textBox4->Text));
		
		
		req.envoyer(cli.creer(Xliv, Xfac, Yanniv, Yachat, textBox1->Text, textBox2->Text));
	}
	if (stock->Checked)
	{
		req.envoyer(art.creer_tva(textBox6->Text));
		req.envoyer(art.creer_article(textBox6->Text, textBox1->Text, textBox4->Text, textBox5->Text));
		req.envoyer(art.creer_couleur(textBox3->Text));
		communication->Text = req.envoyer(art.creer_nature(textBox1->Text, textBox2->Text));
		req.envoyer(art.creer_tarif(textBox8->Text, textBox7->Text, textBox1->Text, textBox3->Text, textBox2->Text));
	}
}
private: System::Void supprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	if (client->Checked) {
		req.envoyer(cli.supprimer(textBoxID->Text));
	}
	if (personnel->Checked) {
		req.envoyer(pers.supprimer(textBoxID->Text));
	}
	if (stock->Checked)
	{
		req.envoyer(art.supprimer(textBoxID->Text));
	}

	if (commande->Checked)
	{
		req.envoyer(art.supprimer(textBoxID->Text));
	}

}

private: System::Void modifier_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (stock->Checked)
	{
		communication->Text = req.envoyer(art.modifier_article(textBox6->Text, textBox1->Text, textBox4->Text, textBox5->Text, textBoxID->Text));
	}
}
};
}
