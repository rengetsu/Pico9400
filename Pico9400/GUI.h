#pragma once

namespace Pico9400 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for GUI
	/// </summary>
	public ref class GUI : public System::Windows::Forms::Form
	{
	public:
		GUI(void)
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
		~GUI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ downMenu_ChannelsButton;
	protected:
	private: System::Windows::Forms::Button^ downMenu_AcquireButton;
	private: System::Windows::Forms::Button^ downMenu_TriggerButton;
	private: System::Windows::Forms::Button^ downMenu_DisplayButton;
	private: System::Windows::Forms::PictureBox^ screenPicture;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ button3;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GUI::typeid));
			this->downMenu_ChannelsButton = (gcnew System::Windows::Forms::Button());
			this->downMenu_AcquireButton = (gcnew System::Windows::Forms::Button());
			this->downMenu_TriggerButton = (gcnew System::Windows::Forms::Button());
			this->downMenu_DisplayButton = (gcnew System::Windows::Forms::Button());
			this->screenPicture = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->screenPicture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// downMenu_ChannelsButton
			// 
			this->downMenu_ChannelsButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"downMenu_ChannelsButton.Image")));
			this->downMenu_ChannelsButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->downMenu_ChannelsButton->Location = System::Drawing::Point(445, 586);
			this->downMenu_ChannelsButton->Name = L"downMenu_ChannelsButton";
			this->downMenu_ChannelsButton->Size = System::Drawing::Size(79, 23);
			this->downMenu_ChannelsButton->TabIndex = 0;
			this->downMenu_ChannelsButton->Text = L"Channels";
			this->downMenu_ChannelsButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->downMenu_ChannelsButton->UseVisualStyleBackColor = true;
			// 
			// downMenu_AcquireButton
			// 
			this->downMenu_AcquireButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"downMenu_AcquireButton.Image")));
			this->downMenu_AcquireButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->downMenu_AcquireButton->Location = System::Drawing::Point(530, 586);
			this->downMenu_AcquireButton->Name = L"downMenu_AcquireButton";
			this->downMenu_AcquireButton->Size = System::Drawing::Size(79, 23);
			this->downMenu_AcquireButton->TabIndex = 1;
			this->downMenu_AcquireButton->Text = L"Acquire";
			this->downMenu_AcquireButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->downMenu_AcquireButton->UseVisualStyleBackColor = true;
			// 
			// downMenu_TriggerButton
			// 
			this->downMenu_TriggerButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"downMenu_TriggerButton.Image")));
			this->downMenu_TriggerButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->downMenu_TriggerButton->Location = System::Drawing::Point(615, 586);
			this->downMenu_TriggerButton->Name = L"downMenu_TriggerButton";
			this->downMenu_TriggerButton->Size = System::Drawing::Size(79, 23);
			this->downMenu_TriggerButton->TabIndex = 2;
			this->downMenu_TriggerButton->Text = L"Trigger";
			this->downMenu_TriggerButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->downMenu_TriggerButton->UseVisualStyleBackColor = true;
			// 
			// downMenu_DisplayButton
			// 
			this->downMenu_DisplayButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"downMenu_DisplayButton.Image")));
			this->downMenu_DisplayButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->downMenu_DisplayButton->Location = System::Drawing::Point(700, 586);
			this->downMenu_DisplayButton->Name = L"downMenu_DisplayButton";
			this->downMenu_DisplayButton->Size = System::Drawing::Size(79, 23);
			this->downMenu_DisplayButton->TabIndex = 3;
			this->downMenu_DisplayButton->Text = L"Display";
			this->downMenu_DisplayButton->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->downMenu_DisplayButton->UseVisualStyleBackColor = true;
			// 
			// screenPicture
			// 
			this->screenPicture->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"screenPicture.Image")));
			this->screenPicture->Location = System::Drawing::Point(12, 12);
			this->screenPicture->Name = L"screenPicture";
			this->screenPicture->Size = System::Drawing::Size(1209, 468);
			this->screenPicture->TabIndex = 4;
			this->screenPicture->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 502);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Ch1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GUI::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(94, 502);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Ch2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GUI::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1210, 470);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1210, 470);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(233, 502);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Out of Demo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GUI::button3_Click);
			// 
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1232, 621);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->screenPicture);
			this->Controls->Add(this->downMenu_DisplayButton);
			this->Controls->Add(this->downMenu_TriggerButton);
			this->Controls->Add(this->downMenu_AcquireButton);
			this->Controls->Add(this->downMenu_ChannelsButton);
			this->Name = L"GUI";
			this->Text = L"GUI";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->screenPicture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox2->Visible = true;
		pictureBox3->Visible = false;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox2->Visible = false;
	pictureBox3->Visible = true;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Process::Start("");
}
};
}
