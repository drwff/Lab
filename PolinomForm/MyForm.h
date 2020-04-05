#pragma once
#include"polinom.h"
#include <msclr\marshal_cppstd.h>
namespace PolinomForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBoxStepen;
	protected:
	private: System::Windows::Forms::TextBox^  textBoxN;
	private: System::Windows::Forms::TextBox^  textBoxPolinomP;
	private: System::Windows::Forms::TextBox^  textBoxPolinomQ;
	private: System::Windows::Forms::TextBox^  textBoxPolinomRez;
	private: System::Windows::Forms::Button^  buttonMaxStep;
	private: System::Windows::Forms::Button^  buttonN;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  buttonAddP;
	private: System::Windows::Forms::Button^  buttonAddQ;
	private: System::Windows::Forms::Button^  buttonEraseP;
	private: System::Windows::Forms::Button^  buttonEraseQ;
	private: System::Windows::Forms::TextBox^  textBoxMonom;
	private: System::Windows::Forms::Button^  buttonPlus;
	private: System::Windows::Forms::Button^  buttonMinus;
	private: System::Windows::Forms::Button^  buttonMult;
	private: System::Windows::Forms::Button^  buttonMultK;
	private: System::Windows::Forms::TextBox^  textBoxK;
	private: System::Windows::Forms::Button^  buttonClear;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxStepen = (gcnew System::Windows::Forms::TextBox());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPolinomP = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPolinomQ = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPolinomRez = (gcnew System::Windows::Forms::TextBox());
			this->buttonMaxStep = (gcnew System::Windows::Forms::Button());
			this->buttonN = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonAddP = (gcnew System::Windows::Forms::Button());
			this->buttonAddQ = (gcnew System::Windows::Forms::Button());
			this->buttonEraseP = (gcnew System::Windows::Forms::Button());
			this->buttonEraseQ = (gcnew System::Windows::Forms::Button());
			this->textBoxMonom = (gcnew System::Windows::Forms::TextBox());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonMult = (gcnew System::Windows::Forms::Button());
			this->buttonMultK = (gcnew System::Windows::Forms::Button());
			this->textBoxK = (gcnew System::Windows::Forms::TextBox());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBoxStepen
			// 
			this->textBoxStepen->Location = System::Drawing::Point(802, 32);
			this->textBoxStepen->Name = L"textBoxStepen";
			this->textBoxStepen->Size = System::Drawing::Size(177, 22);
			this->textBoxStepen->TabIndex = 0;
			// 
			// textBoxN
			// 
			this->textBoxN->Location = System::Drawing::Point(1039, 32);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(177, 22);
			this->textBoxN->TabIndex = 1;
			// 
			// textBoxPolinomP
			// 
			this->textBoxPolinomP->Location = System::Drawing::Point(104, 181);
			this->textBoxPolinomP->Name = L"textBoxPolinomP";
			this->textBoxPolinomP->ReadOnly = true;
			this->textBoxPolinomP->Size = System::Drawing::Size(615, 22);
			this->textBoxPolinomP->TabIndex = 2;
			// 
			// textBoxPolinomQ
			// 
			this->textBoxPolinomQ->Location = System::Drawing::Point(104, 290);
			this->textBoxPolinomQ->Name = L"textBoxPolinomQ";
			this->textBoxPolinomQ->ReadOnly = true;
			this->textBoxPolinomQ->Size = System::Drawing::Size(615, 22);
			this->textBoxPolinomQ->TabIndex = 3;
			// 
			// textBoxPolinomRez
			// 
			this->textBoxPolinomRez->Location = System::Drawing::Point(104, 405);
			this->textBoxPolinomRez->Name = L"textBoxPolinomRez";
			this->textBoxPolinomRez->ReadOnly = true;
			this->textBoxPolinomRez->Size = System::Drawing::Size(615, 22);
			this->textBoxPolinomRez->TabIndex = 4;
			// 
			// buttonMaxStep
			// 
			this->buttonMaxStep->Location = System::Drawing::Point(803, 83);
			this->buttonMaxStep->Name = L"buttonMaxStep";
			this->buttonMaxStep->Size = System::Drawing::Size(176, 47);
			this->buttonMaxStep->TabIndex = 5;
			this->buttonMaxStep->Text = L"Установить макс степень";
			this->buttonMaxStep->UseVisualStyleBackColor = true;
			this->buttonMaxStep->Click += gcnew System::EventHandler(this, &MyForm::buttonMaxStep_Click);
			// 
			// buttonN
			// 
			this->buttonN->Location = System::Drawing::Point(1039, 83);
			this->buttonN->Name = L"buttonN";
			this->buttonN->Size = System::Drawing::Size(176, 47);
			this->buttonN->TabIndex = 6;
			this->buttonN->Text = L"Установить кол-во переменных";
			this->buttonN->UseVisualStyleBackColor = true;
			this->buttonN->Click += gcnew System::EventHandler(this, &MyForm::buttonN_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(28, 186);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"P:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(28, 410);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 17);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Res:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(28, 295);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 17);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Q:";
			// 
			// buttonAddP
			// 
			this->buttonAddP->Location = System::Drawing::Point(803, 176);
			this->buttonAddP->Name = L"buttonAddP";
			this->buttonAddP->Size = System::Drawing::Size(213, 27);
			this->buttonAddP->TabIndex = 10;
			this->buttonAddP->Text = L"Добавить к P";
			this->buttonAddP->UseVisualStyleBackColor = true;
			this->buttonAddP->Click += gcnew System::EventHandler(this, &MyForm::buttonAddP_Click);
			// 
			// buttonAddQ
			// 
			this->buttonAddQ->Location = System::Drawing::Point(803, 285);
			this->buttonAddQ->Name = L"buttonAddQ";
			this->buttonAddQ->Size = System::Drawing::Size(213, 27);
			this->buttonAddQ->TabIndex = 11;
			this->buttonAddQ->Text = L"Добавить к Q";
			this->buttonAddQ->UseVisualStyleBackColor = true;
			this->buttonAddQ->Click += gcnew System::EventHandler(this, &MyForm::buttonAddQ_Click);
			// 
			// buttonEraseP
			// 
			this->buttonEraseP->Location = System::Drawing::Point(802, 218);
			this->buttonEraseP->Name = L"buttonEraseP";
			this->buttonEraseP->Size = System::Drawing::Size(213, 27);
			this->buttonEraseP->TabIndex = 12;
			this->buttonEraseP->Text = L"Удалить из P";
			this->buttonEraseP->UseVisualStyleBackColor = true;
			this->buttonEraseP->Click += gcnew System::EventHandler(this, &MyForm::buttonEraseP_Click);
			// 
			// buttonEraseQ
			// 
			this->buttonEraseQ->Location = System::Drawing::Point(802, 330);
			this->buttonEraseQ->Name = L"buttonEraseQ";
			this->buttonEraseQ->Size = System::Drawing::Size(213, 27);
			this->buttonEraseQ->TabIndex = 13;
			this->buttonEraseQ->Text = L"Удалить из Q";
			this->buttonEraseQ->UseVisualStyleBackColor = true;
			this->buttonEraseQ->Click += gcnew System::EventHandler(this, &MyForm::buttonEraseQ_Click);
			// 
			// textBoxMonom
			// 
			this->textBoxMonom->Location = System::Drawing::Point(1069, 249);
			this->textBoxMonom->Name = L"textBoxMonom";
			this->textBoxMonom->Size = System::Drawing::Size(208, 22);
			this->textBoxMonom->TabIndex = 14;
			// 
			// buttonPlus
			// 
			this->buttonPlus->Location = System::Drawing::Point(803, 400);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(76, 27);
			this->buttonPlus->TabIndex = 15;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = true;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlus_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->Location = System::Drawing::Point(918, 400);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(76, 27);
			this->buttonMinus->TabIndex = 16;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = true;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonMinus_Click);
			// 
			// buttonMult
			// 
			this->buttonMult->Location = System::Drawing::Point(1039, 400);
			this->buttonMult->Name = L"buttonMult";
			this->buttonMult->Size = System::Drawing::Size(76, 27);
			this->buttonMult->TabIndex = 17;
			this->buttonMult->Text = L"*";
			this->buttonMult->UseVisualStyleBackColor = true;
			this->buttonMult->Click += gcnew System::EventHandler(this, &MyForm::buttonMult_Click);
			// 
			// buttonMultK
			// 
			this->buttonMultK->Location = System::Drawing::Point(1154, 400);
			this->buttonMultK->Name = L"buttonMultK";
			this->buttonMultK->Size = System::Drawing::Size(105, 27);
			this->buttonMultK->TabIndex = 18;
			this->buttonMultK->Text = L"* на число";
			this->buttonMultK->UseVisualStyleBackColor = true;
			this->buttonMultK->Click += gcnew System::EventHandler(this, &MyForm::buttonMultK_Click);
			// 
			// textBoxK
			// 
			this->textBoxK->Location = System::Drawing::Point(1286, 402);
			this->textBoxK->Name = L"textBoxK";
			this->textBoxK->Size = System::Drawing::Size(57, 22);
			this->textBoxK->TabIndex = 19;
			// 
			// buttonClear
			// 
			this->buttonClear->Location = System::Drawing::Point(1286, 31);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(110, 42);
			this->buttonClear->TabIndex = 20;
			this->buttonClear->Text = L"Очистить поля";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1440, 508);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->textBoxK);
			this->Controls->Add(this->buttonMultK);
			this->Controls->Add(this->buttonMult);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->textBoxMonom);
			this->Controls->Add(this->buttonEraseQ);
			this->Controls->Add(this->buttonEraseP);
			this->Controls->Add(this->buttonAddQ);
			this->Controls->Add(this->buttonAddP);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonN);
			this->Controls->Add(this->buttonMaxStep);
			this->Controls->Add(this->textBoxPolinomRez);
			this->Controls->Add(this->textBoxPolinomQ);
			this->Controls->Add(this->textBoxPolinomP);
			this->Controls->Add(this->textBoxN);
			this->Controls->Add(this->textBoxStepen);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int max_step;
		int n;
		polinom* polinom1;
		polinom* polinom2;
		polinom* res;
	private: System::Void buttonMaxStep_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ tmp = textBoxStepen->Text;
		max_step = System::Convert::ToInt32(tmp);
		textBoxStepen->ReadOnly = true;
		polinom1 = new polinom("", n, max_step);
		polinom2 = new polinom("", n, max_step);
	}
	private: System::Void buttonN_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ tmp = textBoxN->Text;
		n = System::Convert::ToInt32(tmp);
		textBoxN->ReadOnly = true;
		polinom1 = new polinom("", n, max_step);
		polinom2 = new polinom("", n, max_step);
	}
	private: System::Void buttonClear_Click(System::Object^  sender, System::EventArgs^  e) {
		textBoxStepen->ReadOnly = false;
		textBoxN->ReadOnly = false;
		textBoxStepen->Clear();
		textBoxN->Clear();
		textBoxPolinomP->Clear();
		textBoxPolinomQ->Clear();
		textBoxPolinomRez->Clear();
		textBoxK->Clear();
		textBoxMonom->Clear();
	}
	private: System::Void buttonAddP_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ tmpS = textBoxMonom->Text;
		std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
		monom* M = new monom(tmp, max_step, n);
		polinom1->add(*M);
		textBoxPolinomP->Text = msclr::interop::marshal_as<String^>(polinom1->to_string());
	}
	private: System::Void buttonAddQ_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ tmpS = textBoxMonom->Text;
		std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
		monom* M = new monom(tmp, max_step, n);
		polinom2->add(*M);
		textBoxPolinomQ->Text = msclr::interop::marshal_as<String^>(polinom2->to_string());
	}
	private: System::Void buttonEraseP_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ tmpS = textBoxMonom->Text;
		std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
		monom* M = new monom(tmp, max_step, n);
		polinom1->erase(*M);
		textBoxPolinomP->Text = msclr::interop::marshal_as<String^>(polinom1->to_string());
	}
	private: System::Void buttonEraseQ_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ tmpS = textBoxMonom->Text;
		std::string tmp = msclr::interop::marshal_as<std::string>(tmpS);
		monom* M = new monom(tmp, max_step, n);
		polinom2->erase(*M);
		textBoxPolinomQ->Text = msclr::interop::marshal_as<String^>(polinom2->to_string());
	}
	private: System::Void buttonPlus_Click(System::Object^  sender, System::EventArgs^  e) {
		res = new polinom(polinom1->operator+(*polinom2));
		textBoxPolinomRez->Text = msclr::interop::marshal_as<String^>(res->to_string());
	}
	private: System::Void buttonMinus_Click(System::Object^  sender, System::EventArgs^  e) {
		res = new polinom(polinom1->operator-(*polinom2));
		textBoxPolinomRez->Text = msclr::interop::marshal_as<String^>(res->to_string());
	}
	private: System::Void buttonMult_Click(System::Object^  sender, System::EventArgs^  e) {
		res = new polinom(polinom1->operator*(*polinom2));
		textBoxPolinomRez->Text = msclr::interop::marshal_as<String^>(res->to_string());
	}
	private: System::Void buttonMultK_Click(System::Object^  sender, System::EventArgs^  e) {
		int k = System::Convert::ToInt32(textBoxK->Text);
		res = new polinom(polinom1->operator*(k));
		textBoxPolinomRez->Text = msclr::interop::marshal_as<String^>(res->to_string());
	}
	};
}
