#pragma once
#include"BinaryTree.h"
#include"TreeNodee.h"
#include<fstream>
#include <msclr\marshal_cppstd.h>

namespace Project8 {
	typedef TreeNodee* TreeNodePtr;
	TreeNodePtr head;
	TreeNodePtr last;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		MyForm(void)
		{

			
			InitializeComponent();
			panel2->BackColor;
			panel1->Hide();
			button5->Hide();
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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label1->Location = System::Drawing::Point(566, 137);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(419, 71);
			this->label1->TabIndex = 0;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(628, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 54);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Yes";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 18));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(781, 248);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 54);
			this->button2->TabIndex = 2;
			this->button2->Text = L"No";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(496, 395);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(475, 150);
			this->panel1->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->label4->Location = System::Drawing::Point(19, 86);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 29);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Answer :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14));
			this->label3->Location = System::Drawing::Point(14, 38);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Question :";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(322, 50);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 31);
			this->button4->TabIndex = 2;
			this->button4->Text = L"add";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(132, 91);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(174, 24);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(132, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(174, 24);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Font = (gcnew System::Drawing::Font(L"Tahoma", 18));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button5->Location = System::Drawing::Point(878, 315);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(128, 61);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Add";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 18));
			this->label2->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->label2->Location = System::Drawing::Point(569, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 36);
			this->label2->TabIndex = 6;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10));
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1032, 652);
			this->panel2->TabIndex = 7;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 44, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label5->Location = System::Drawing::Point(260, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(505, 107);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Guessing Game";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::LightCyan;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->Font = (gcnew System::Drawing::Font(L"Tahoma", 28));
			this->button6->ForeColor = System::Drawing::Color::MediumPurple;
			this->button6->Location = System::Drawing::Point(736, 478);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(155, 66);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Start";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSkyBlue;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1032, 652);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		
		StreamReader^ input_file;
		FileStream^ fs;
		StreamWriter^ sw;


		
		void  write(TreeNodee::TreeNodePtr start, StreamWriter^ out_file)
		{
			if (start == NULL) {
				out_file->WriteLine("*");
			}
			else
			{
				std::string ee = start->text;
				String^ ss = gcnew String(ee.c_str());
				out_file->WriteLine(ss);
				write(start->yes_ans, out_file);
				write(start->no_ans, out_file);
			}
			//sw->Flush();
			//sw->Close();
			return;
		}
		void read(TreeNodee::TreeNodePtr &start, StreamReader^ input_file)
		{
			std::string input;
			String^ aa;
			 
			


			aa= input_file->ReadLine();
		    //aa->LengthIsNullOrEmpty;
			
				std::string unmanaged = msclr::interop::marshal_as<std::string>(aa);
				//System::Convert::ToString(aa);



				if (unmanaged != "*")
				{
					start = new TreeNodee();

					start->text = unmanaged;
					read(start->yes_ans, input_file);
					read(start->no_ans, input_file);
				}
				else
				{
					start = NULL;
				}
			
		}
		//TreeNode::TreeNodePtr m;
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {


	}
	public: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {



	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		BinaryTree t;
		int i=0;
		t.traversingyes(last);
		if (last->yes_ans == NULL && last->no_ans == NULL) {
			std::string input;
			String^ aa;




			input = last->text;
			String^ sss = gcnew String(input.c_str());
			if (MessageBox::Show(sss, "Do You Think About?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				label2->Text = "Yeahhh I Got It Right  ^_^";
				button1->Enabled = false;
				button2->Enabled = false;
			}
			else {
				label2->Text = "Nahh I Got It Wrong :(";
				label1->Text = "Add New Question";
				button5->Show();
				button5->Enabled = true;
				button1->Enabled = false;
				button2->Enabled = false;
			}

			std::string ee = "Do You Think About ";
			String^ ss = gcnew String(ee.c_str());
		
		}
		
		
		std::string s = last->text;
		String^ ss = gcnew String(s.c_str());

		label1->Text = ss;
		//if (i == 2) {
		//	label2->Text = System::Convert::ToString(i);
		//	std::string s = "Is your thougt about : ";
		//	String^ ss = gcnew String(s.c_str());
		//	label3->Text = ss;
		//	//label2->Text = "aa";
		//}

	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
}
public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	BinaryTree t;
	t.traversingno(last);
	std::string s = last->text;
	String^ ss = gcnew String(s.c_str());

	label1->Text = ss;
	if (last->yes_ans == NULL && last->no_ans == NULL) {
		std::string input;
		String^ aa;




		input = last->text;
		String^ sss = gcnew String(input.c_str());
		if (MessageBox::Show(sss, "Do You Think About?", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			label2->Text = " Yeahhh I Got It Right  ^_^";
			button1->Enabled = false;
			button2->Enabled = false;
		}
		else {
			label2->Text = "Nahh I Got It Wrong :( ";
			label1->Text = "Add New Question";
			button5->Show();
			button5->Enabled = true;
			button1->Enabled = false;
			button2->Enabled = false;
		}

		std::string ee = "Do You Think About ";
		String^ ss = gcnew String(ee.c_str());
	}
	
	
	
	

	//if (i == 1) {
	//	label2->Text = System::Convert::ToString(i);
	//	std::string s = "Is your thougt about : ";
	//	String^ ss = gcnew String(s.c_str());
	//	label3->Text = ss;

	//	//label2->Text = "aa";
	//}


}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	panel1->Show();

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	fs = gcnew FileStream("test", FileMode::Open);
	sw = gcnew StreamWriter(fs);

	BinaryTree t;
	

	std::string unmanaged = msclr::interop::marshal_as<std::string>(textBox1->Text);
	std::string unmanaged1 = msclr::interop::marshal_as<std::string>(textBox2->Text);

	
	 t.build_question(last, unmanaged1, unmanaged);
	 write(head,sw);
	 sw->Close();
	 fs->Close();
	 
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Hide();
	input_file = File::OpenText("test");
	BinaryTree t;
	read(head, input_file);
	input_file->Close();
	//input_file->Close();
	t.traversing(head, last);
	std::string s = last->text;
	String^ ss = gcnew String(s.c_str());

	label1->Text = ss;


}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
