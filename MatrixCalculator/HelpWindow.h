#pragma once

namespace MatrixCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� HelpWindow
	/// </summary>
	public ref class HelpWindow : public System::Windows::Forms::Form
	{
	public:
		HelpWindow(void)
		{
			InitializeComponent();
			textBox1->Text = "�� ����������� ����������� ������." + Environment::NewLine + "��� �������� ���������� ����������� Tab."+ Environment::NewLine+"� ������������ �������� �������� : " + Environment::NewLine+
				"A+B - �������� ������"+ Environment::NewLine+"A*B - ������������ ������"+ Environment::NewLine +"A-B - ��������� ������"+
				Environment::NewLine +"c*A - ��������� ������� �� ���������"+ Environment::NewLine +"|A| -���������� ������������ �������" + Environment::NewLine +
				"T - ���������������� �������";
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~HelpWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->CausesValidation = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->HideSelection = false;
			this->textBox1->Location = System::Drawing::Point(12, 3);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ShortcutsEnabled = false;
			this->textBox1->Size = System::Drawing::Size(540, 246);
			this->textBox1->TabIndex = 0;
			this->textBox1->TabStop = false;
			// 
			// HelpWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(564, 261);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"HelpWindow";
			this->Text = L"HelpWindow";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
