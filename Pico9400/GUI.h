#pragma once

namespace Pico9400 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->screenPicture))->BeginInit();
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
			// GUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1232, 621);
			this->Controls->Add(this->screenPicture);
			this->Controls->Add(this->downMenu_DisplayButton);
			this->Controls->Add(this->downMenu_TriggerButton);
			this->Controls->Add(this->downMenu_AcquireButton);
			this->Controls->Add(this->downMenu_ChannelsButton);
			this->Name = L"GUI";
			this->Text = L"GUI";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->screenPicture))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
