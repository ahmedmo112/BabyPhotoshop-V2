#pragma once
#include "Source.cpp"

namespace BabyPhotoshop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ load_btn;


	private: System::Windows::Forms::OpenFileDialog^ openFile;
	private: System::Windows::Forms::PictureBox^ imageBefore;
	private: System::Windows::Forms::Button^ invert_btn;
	private: System::Windows::Forms::Button^ bw_btn;
	private: System::Windows::Forms::Button^ edge_detect_btn;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ imageAfter;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ save_btn;
	private: System::Windows::Forms::SaveFileDialog^ saveFile;


	protected:


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->load_btn = (gcnew System::Windows::Forms::Button());
			this->openFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->imageBefore = (gcnew System::Windows::Forms::PictureBox());
			this->invert_btn = (gcnew System::Windows::Forms::Button());
			this->bw_btn = (gcnew System::Windows::Forms::Button());
			this->edge_detect_btn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->imageAfter = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->saveFile = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageBefore))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageAfter))->BeginInit();
			this->SuspendLayout();
			// 
			// load_btn
			// 
			this->load_btn->BackColor = System::Drawing::Color::RosyBrown;
			this->load_btn->Location = System::Drawing::Point(78, 470);
			this->load_btn->Name = L"load_btn";
			this->load_btn->Size = System::Drawing::Size(90, 47);
			this->load_btn->TabIndex = 0;
			this->load_btn->Text = L"Load";
			this->load_btn->UseVisualStyleBackColor = false;
			this->load_btn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// openFile
			// 
			this->openFile->FileName = L"openFileDialog1";
			// 
			// imageBefore
			// 
			this->imageBefore->Location = System::Drawing::Point(11, 136);
			this->imageBefore->Name = L"imageBefore";
			this->imageBefore->Size = System::Drawing::Size(265, 290);
			this->imageBefore->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageBefore->TabIndex = 1;
			this->imageBefore->TabStop = false;
			// 
			// invert_btn
			// 
			this->invert_btn->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->invert_btn->Location = System::Drawing::Point(706, 170);
			this->invert_btn->Name = L"invert_btn";
			this->invert_btn->Size = System::Drawing::Size(116, 51);
			this->invert_btn->TabIndex = 2;
			this->invert_btn->Text = L"Invert";
			this->invert_btn->UseVisualStyleBackColor = true;
			this->invert_btn->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// bw_btn
			// 
			this->bw_btn->Location = System::Drawing::Point(706, 230);
			this->bw_btn->Name = L"bw_btn";
			this->bw_btn->Size = System::Drawing::Size(116, 54);
			this->bw_btn->TabIndex = 3;
			this->bw_btn->Text = L"Black and White";
			this->bw_btn->UseVisualStyleBackColor = true;
			this->bw_btn->Click += gcnew System::EventHandler(this, &MyForm::bw_btn_Click);
			// 
			// edge_detect_btn
			// 
			this->edge_detect_btn->Location = System::Drawing::Point(706, 286);
			this->edge_detect_btn->Name = L"edge_detect_btn";
			this->edge_detect_btn->Size = System::Drawing::Size(116, 46);
			this->edge_detect_btn->TabIndex = 4;
			this->edge_detect_btn->Text = L"Edge Detect";
			this->edge_detect_btn->UseVisualStyleBackColor = true;
			this->edge_detect_btn->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DarkGreen;
			this->label1->Location = System::Drawing::Point(90, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 39);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Before";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// imageAfter
			// 
			this->imageAfter->Location = System::Drawing::Point(302, 136);
			this->imageAfter->Name = L"imageAfter";
			this->imageAfter->Size = System::Drawing::Size(270, 290);
			this->imageAfter->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageAfter->TabIndex = 6;
			this->imageAfter->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Crimson;
			this->label2->Location = System::Drawing::Point(370, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 38);
			this->label2->TabIndex = 7;
			this->label2->Text = L"After";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// save_btn
			// 
			this->save_btn->BackColor = System::Drawing::Color::RosyBrown;
			this->save_btn->Location = System::Drawing::Point(237, 470);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(90, 47);
			this->save_btn->TabIndex = 8;
			this->save_btn->Text = L"Save";
			this->save_btn->UseVisualStyleBackColor = false;
			this->save_btn->Click += gcnew System::EventHandler(this, &MyForm::save_btn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(913, 573);
			this->Controls->Add(this->save_btn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->imageAfter);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->edge_detect_btn);
			this->Controls->Add(this->bw_btn);
			this->Controls->Add(this->invert_btn);
			this->Controls->Add(this->imageBefore);
			this->Controls->Add(this->load_btn);
			this->Font = (gcnew System::Drawing::Font(L"Arial", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->Text = L"Baby Photoshop";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageBefore))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageAfter))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFile->ShowDialog() == Windows::Forms::DialogResult::OK) {
			imageBefore->Load(openFile->FileName);
			loadImage(openFile->FileName);
		}
	}

		   void loadIntoPictureBox() {
			   Bitmap^ bmpLoad = gcnew Bitmap("tmp.bmp");
			   Bitmap^ copybmp = gcnew Bitmap(bmpLoad);
			   imageAfter->Image = copybmp;

			   delete bmpLoad;

			   imageAfter->Refresh();
		   }
		  
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		detectEdges();
		loadIntoPictureBox();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		invert();
		loadIntoPictureBox();
	}
private: System::Void bw_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	blackAndWihte();
	loadIntoPictureBox();
}
private: System::Void save_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (saveFile->ShowDialog() == Windows::Forms::DialogResult::OK) {
		saveImage(saveFile->FileName);
	}
}
};
}


