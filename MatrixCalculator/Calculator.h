#pragma once
#include "HelpWindow.h"

using namespace System::Collections::Generic;

namespace MatrixCalculator {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			comboBox1->SelectedIndex = 0;
			ChangeGridSizes(Matrix1Rows->Value, Matrix1Column->Value, 1);
			ChangeGridSizes(Matrix2Rows->Value, Matrix2Column->Value, 2);
			ChangeGridSizes(Matrix1Rows->Value, Matrix1Column->Value, 3);

			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}


	private:
		int OperationIndex = 0;

		List<List<int>^> Mat1;
		List<List<int>^> Mat2;

		bool draging = false;
		Point offset;



	private: System::Windows::Forms::DataGridView^ MatrixGrid1;
	private: System::Windows::Forms::NumericUpDown^ Matrix1Rows;

	private: System::Windows::Forms::NumericUpDown^ Matrix1Column;
	private: System::Windows::Forms::NumericUpDown^ Matrix2Column;
	private: System::Windows::Forms::NumericUpDown^ Matrix2Rows;
	private: System::Windows::Forms::DataGridView^ MatrixGrid2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ EqualButton;
	private: System::Windows::Forms::Button^ ExitButton;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ TreyButton;
	private: System::Windows::Forms::Label^ DetLabel;

	private: System::Windows::Forms::DataGridView^ ResultMatrix;

	private: System::Windows::Forms::TextBox^ ConstText;
	private: System::Windows::Forms::Button^ HelpButton;
	private: System::Windows::Forms::Panel^ panel1;













	protected:






	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->MatrixGrid1 = (gcnew System::Windows::Forms::DataGridView());
			this->Matrix1Rows = (gcnew System::Windows::Forms::NumericUpDown());
			this->Matrix1Column = (gcnew System::Windows::Forms::NumericUpDown());
			this->Matrix2Column = (gcnew System::Windows::Forms::NumericUpDown());
			this->Matrix2Rows = (gcnew System::Windows::Forms::NumericUpDown());
			this->MatrixGrid2 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->EqualButton = (gcnew System::Windows::Forms::Button());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TreyButton = (gcnew System::Windows::Forms::Button());
			this->ResultMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->DetLabel = (gcnew System::Windows::Forms::Label());
			this->ConstText = (gcnew System::Windows::Forms::TextBox());
			this->HelpButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MatrixGrid1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix1Rows))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix1Column))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix2Column))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix2Rows))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MatrixGrid2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultMatrix))->BeginInit();
			this->SuspendLayout();
			// 
			// MatrixGrid1
			// 
			this->MatrixGrid1->AllowUserToAddRows = false;
			this->MatrixGrid1->AllowUserToDeleteRows = false;
			this->MatrixGrid1->AllowUserToResizeColumns = false;
			this->MatrixGrid1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->MatrixGrid1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->MatrixGrid1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MatrixGrid1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->MatrixGrid1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MatrixGrid1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::EnableWithoutHeaderText;
			this->MatrixGrid1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->MatrixGrid1->ColumnHeadersHeight = 4;
			this->MatrixGrid1->ColumnHeadersVisible = false;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->Format = L"N2";
			dataGridViewCellStyle2->NullValue = L"0";
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->MatrixGrid1->DefaultCellStyle = dataGridViewCellStyle2;
			this->MatrixGrid1->EnableHeadersVisualStyles = false;
			this->MatrixGrid1->Location = System::Drawing::Point(50, 120);
			this->MatrixGrid1->MultiSelect = false;
			this->MatrixGrid1->Name = L"MatrixGrid1";
			this->MatrixGrid1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->MatrixGrid1->RowHeadersVisible = false;
			this->MatrixGrid1->RowHeadersWidth = 40;
			this->MatrixGrid1->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->MatrixGrid1->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::SystemColors::Control;
			this->MatrixGrid1->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->MatrixGrid1->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MatrixGrid1->RowTemplate->DefaultCellStyle->Format = L"N2";
			this->MatrixGrid1->RowTemplate->DefaultCellStyle->NullValue = L"0";
			this->MatrixGrid1->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			this->MatrixGrid1->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->MatrixGrid1->RowTemplate->Height = 30;
			this->MatrixGrid1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->MatrixGrid1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->MatrixGrid1->ShowCellToolTips = false;
			this->MatrixGrid1->Size = System::Drawing::Size(200, 151);
			this->MatrixGrid1->TabIndex = 0;
			// 
			// Matrix1Rows
			// 
			this->Matrix1Rows->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Matrix1Rows->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Matrix1Rows->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Matrix1Rows->Location = System::Drawing::Point(113, 57);
			this->Matrix1Rows->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->Matrix1Rows->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Matrix1Rows->Name = L"Matrix1Rows";
			this->Matrix1Rows->Size = System::Drawing::Size(53, 26);
			this->Matrix1Rows->TabIndex = 1;
			this->Matrix1Rows->TabStop = false;
			this->Matrix1Rows->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Matrix1Rows->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->Matrix1Rows->ValueChanged += gcnew System::EventHandler(this, &Calculator::GridSize1Changed);
			// 
			// Matrix1Column
			// 
			this->Matrix1Column->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Matrix1Column->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Matrix1Column->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Matrix1Column->Location = System::Drawing::Point(186, 57);
			this->Matrix1Column->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->Matrix1Column->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Matrix1Column->Name = L"Matrix1Column";
			this->Matrix1Column->Size = System::Drawing::Size(53, 26);
			this->Matrix1Column->TabIndex = 2;
			this->Matrix1Column->TabStop = false;
			this->Matrix1Column->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Matrix1Column->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->Matrix1Column->ValueChanged += gcnew System::EventHandler(this, &Calculator::GridSize1Changed);
			// 
			// Matrix2Column
			// 
			this->Matrix2Column->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Matrix2Column->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Matrix2Column->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Matrix2Column->Location = System::Drawing::Point(526, 57);
			this->Matrix2Column->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->Matrix2Column->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Matrix2Column->Name = L"Matrix2Column";
			this->Matrix2Column->Size = System::Drawing::Size(53, 26);
			this->Matrix2Column->TabIndex = 5;
			this->Matrix2Column->TabStop = false;
			this->Matrix2Column->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Matrix2Column->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->Matrix2Column->ValueChanged += gcnew System::EventHandler(this, &Calculator::GridSize2Changed);
			// 
			// Matrix2Rows
			// 
			this->Matrix2Rows->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Matrix2Rows->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Matrix2Rows->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Matrix2Rows->Location = System::Drawing::Point(453, 57);
			this->Matrix2Rows->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->Matrix2Rows->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->Matrix2Rows->Name = L"Matrix2Rows";
			this->Matrix2Rows->Size = System::Drawing::Size(53, 26);
			this->Matrix2Rows->TabIndex = 4;
			this->Matrix2Rows->TabStop = false;
			this->Matrix2Rows->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Matrix2Rows->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->Matrix2Rows->ValueChanged += gcnew System::EventHandler(this, &Calculator::GridSize2Changed);
			// 
			// MatrixGrid2
			// 
			this->MatrixGrid2->AllowUserToAddRows = false;
			this->MatrixGrid2->AllowUserToDeleteRows = false;
			this->MatrixGrid2->AllowUserToResizeColumns = false;
			this->MatrixGrid2->AllowUserToResizeRows = false;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->MatrixGrid2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle3;
			this->MatrixGrid2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MatrixGrid2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->MatrixGrid2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MatrixGrid2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->MatrixGrid2->ColumnHeadersVisible = false;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle4->Format = L"N2";
			dataGridViewCellStyle4->NullValue = L"0";
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->MatrixGrid2->DefaultCellStyle = dataGridViewCellStyle4;
			this->MatrixGrid2->Location = System::Drawing::Point(436, 120);
			this->MatrixGrid2->MultiSelect = false;
			this->MatrixGrid2->Name = L"MatrixGrid2";
			this->MatrixGrid2->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->MatrixGrid2->RowHeadersVisible = false;
			this->MatrixGrid2->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->MatrixGrid2->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::SystemColors::Control;
			this->MatrixGrid2->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->MatrixGrid2->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MatrixGrid2->RowTemplate->DefaultCellStyle->Format = L"N2";
			this->MatrixGrid2->RowTemplate->DefaultCellStyle->NullValue = L"0";
			this->MatrixGrid2->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			this->MatrixGrid2->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->MatrixGrid2->RowTemplate->Height = 30;
			this->MatrixGrid2->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->MatrixGrid2->Size = System::Drawing::Size(200, 151);
			this->MatrixGrid2->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"A+B", L"A*B", L"A-B", L"c*A", L"|A|", L"T" });
			this->comboBox1->Location = System::Drawing::Point(303, 135);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 45);
			this->comboBox1->TabIndex = 6;
			this->comboBox1->TabStop = false;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Calculator::comboBox1_SelectedIndexChanged);
			// 
			// EqualButton
			// 
			this->EqualButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->EqualButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EqualButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EqualButton->Location = System::Drawing::Point(322, 203);
			this->EqualButton->Name = L"EqualButton";
			this->EqualButton->Size = System::Drawing::Size(59, 45);
			this->EqualButton->TabIndex = 10;
			this->EqualButton->Text = L"=";
			this->EqualButton->UseVisualStyleBackColor = true;
			this->EqualButton->Click += gcnew System::EventHandler(this, &Calculator::EqualButton_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ExitButton->BackColor = System::Drawing::Color::Transparent;
			this->ExitButton->FlatAppearance->BorderSize = 0;
			this->ExitButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitButton->ForeColor = System::Drawing::Color::Black;
			this->ExitButton->Location = System::Drawing::Point(682, 12);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(40, 40);
			this->ExitButton->TabIndex = 11;
			this->ExitButton->Text = L"X";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &Calculator::ExitButton_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Enabled = false;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Matrix Calculator";
			// 
			// TreyButton
			// 
			this->TreyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TreyButton->BackColor = System::Drawing::Color::Transparent;
			this->TreyButton->FlatAppearance->BorderSize = 0;
			this->TreyButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->TreyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TreyButton->ForeColor = System::Drawing::Color::Black;
			this->TreyButton->Location = System::Drawing::Point(636, 12);
			this->TreyButton->Name = L"TreyButton";
			this->TreyButton->Size = System::Drawing::Size(40, 40);
			this->TreyButton->TabIndex = 12;
			this->TreyButton->Text = L"-";
			this->TreyButton->UseVisualStyleBackColor = false;
			this->TreyButton->Click += gcnew System::EventHandler(this, &Calculator::TreyButton_Click);
			// 
			// ResultMatrix
			// 
			this->ResultMatrix->AllowUserToAddRows = false;
			this->ResultMatrix->AllowUserToDeleteRows = false;
			this->ResultMatrix->AllowUserToResizeColumns = false;
			this->ResultMatrix->AllowUserToResizeRows = false;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->ResultMatrix->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle5;
			this->ResultMatrix->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ResultMatrix->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->ResultMatrix->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ResultMatrix->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->ResultMatrix->ColumnHeadersVisible = false;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->Format = L"N2";
			dataGridViewCellStyle6->NullValue = L"0";
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->ResultMatrix->DefaultCellStyle = dataGridViewCellStyle6;
			this->ResultMatrix->Location = System::Drawing::Point(246, 330);
			this->ResultMatrix->MultiSelect = false;
			this->ResultMatrix->Name = L"ResultMatrix";
			this->ResultMatrix->ReadOnly = true;
			this->ResultMatrix->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->ResultMatrix->RowHeadersVisible = false;
			this->ResultMatrix->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->ResultMatrix->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::SystemColors::Control;
			this->ResultMatrix->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->ResultMatrix->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::SystemColors::ControlText;
			this->ResultMatrix->RowTemplate->DefaultCellStyle->Format = L"N2";
			this->ResultMatrix->RowTemplate->DefaultCellStyle->NullValue = L"0";
			this->ResultMatrix->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			this->ResultMatrix->RowTemplate->DefaultCellStyle->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->ResultMatrix->RowTemplate->Height = 30;
			this->ResultMatrix->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->ResultMatrix->Size = System::Drawing::Size(200, 151);
			this->ResultMatrix->TabIndex = 11;
			this->ResultMatrix->TabStop = false;
			// 
			// DetLabel
			// 
			this->DetLabel->AutoSize = true;
			this->DetLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DetLabel->Location = System::Drawing::Point(501, 330);
			this->DetLabel->Name = L"DetLabel";
			this->DetLabel->Size = System::Drawing::Size(110, 37);
			this->DetLabel->TabIndex = 12;
			this->DetLabel->Text = L"Det(A)";
			this->DetLabel->Visible = false;
			// 
			// ConstText
			// 
			this->ConstText->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ConstText->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ConstText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ConstText->Location = System::Drawing::Point(128, 135);
			this->ConstText->Name = L"ConstText";
			this->ConstText->Size = System::Drawing::Size(122, 49);
			this->ConstText->TabIndex = 14;
			this->ConstText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// HelpButton
			// 
			this->HelpButton->BackColor = System::Drawing::Color::Transparent;
			this->HelpButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HelpButton.BackgroundImage")));
			this->HelpButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->HelpButton->FlatAppearance->BorderSize = 0;
			this->HelpButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->HelpButton->Location = System::Drawing::Point(600, 18);
			this->HelpButton->Name = L"HelpButton";
			this->HelpButton->Size = System::Drawing::Size(30, 30);
			this->HelpButton->TabIndex = 15;
			this->HelpButton->UseVisualStyleBackColor = false;
			this->HelpButton->Click += gcnew System::EventHandler(this, &Calculator::HelpButton_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(730, 16);
			this->panel1->TabIndex = 16;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Calculator::panel1_MouseUp);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 540);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->HelpButton);
			this->Controls->Add(this->ConstText);
			this->Controls->Add(this->DetLabel);
			this->Controls->Add(this->ResultMatrix);
			this->Controls->Add(this->TreyButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->EqualButton);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->Matrix2Column);
			this->Controls->Add(this->Matrix2Rows);
			this->Controls->Add(this->MatrixGrid2);
			this->Controls->Add(this->Matrix1Column);
			this->Controls->Add(this->Matrix1Rows);
			this->Controls->Add(this->MatrixGrid1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Calculator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MatrixGrid1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix1Rows))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix1Column))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix2Column))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Matrix2Rows))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MatrixGrid2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ResultMatrix))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ChangeGridSizes(System::Decimal r, System::Decimal c, int grid) {
		int rows = (int)r;
		int columns = (int)c;

		int ws = columns * 40;
		int hs = rows * 30 + 1;
		if (ws > 200) {
			ws = 200;
		}
		if (hs > 151) {
			hs = 151;
		}
		switch (grid) {
		case 1:
			MatrixGrid1->RowCount = rows;
			MatrixGrid1->ColumnCount = columns;
			MatrixGrid1->Width = ws;
			MatrixGrid1->Height = hs;
			MatrixGrid1->Location = Point(250 - MatrixGrid1->Width, 120);
			break;
		case 2:
			MatrixGrid2->RowCount = rows;
			MatrixGrid2->ColumnCount = columns;
			MatrixGrid2->Width = ws;
			MatrixGrid2->Height = hs;
			MatrixGrid2->Location = Point(440, 120);
			break;
		case 3:
			ws = columns * 60;
			ResultMatrix->RowCount = rows;
			ResultMatrix->ColumnCount = columns;
			ResultMatrix->Width = ws;
			ResultMatrix->Height = hs;
			ResultMatrix->Location = Point(365 - ws / 2, 330);
			break;
		}
	}

	private: System::Void GridSize1Changed(System::Object^ sender, System::EventArgs^ e) {
		ChangeGridSizes(Matrix1Rows->Value, Matrix1Column->Value, 1);
	}

	private: System::Void GridSize2Changed(System::Object^ sender, System::EventArgs^ e) {
		ChangeGridSizes(Matrix2Rows->Value, Matrix2Column->Value, 2);
	}


	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		OperationIndex = comboBox1->SelectedIndex;
		switch (OperationIndex)
		{
		case 0:
			MatrixGrid1->Visible = true;
			Matrix1Column->Visible = true;
			Matrix1Rows->Visible = true;
			DetLabel->Visible = false;
			ConstText->Visible = false;
			break;
		case 1:
			MatrixGrid1->Visible = true;
			Matrix1Column->Visible = true;
			Matrix1Rows->Visible = true;
			DetLabel->Visible = false;
			ConstText->Visible = false;
			break;
		case 2:
			MatrixGrid1->Visible = true;
			Matrix1Column->Visible = true;
			Matrix1Rows->Visible = true;
			DetLabel->Visible = false;
			ConstText->Visible = false;
			break;
		case 3:
			MatrixGrid1->Visible = false;
			Matrix1Column->Visible = false;
			Matrix1Rows->Visible = false;
			DetLabel->Visible = false;
			ConstText->Visible = true;
			break;
		case 4:
			MatrixGrid1->Visible = false;
			Matrix1Column->Visible = false;
			Matrix1Rows->Visible = false;
			ConstText->Visible = false;
			break;
		case 5:
			MatrixGrid1->Visible = false;
			Matrix1Column->Visible = false;
			Matrix1Rows->Visible = false;
			DetLabel->Visible = false;
			ConstText->Visible = false;
			break;
		}
	}

	private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void TreyButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}

	private: System::Void EqualButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ScanMatrix();
		switch (OperationIndex)
		{
		case 0:
			PlusMatrix();
			break;
		case 1:
			MultMatrix();
			break;
		case 2:
			SubstractMatrix();
			break;
		case 3:
			MultWithConst();
			break;
		case 4:
			Determin();
			break;
		case 5:
			Transp();
			break;
		}
	}

	private: System::Void ScanMatrix() {
		Mat1.Clear();
		Mat2.Clear();
		for (int i = 0; i < Matrix1Rows->Value; ++i) {
			Mat1.Add(gcnew List<int>);
			for (int j = 0; j < Matrix1Column->Value; ++j) {
				if (!MatrixGrid1->Rows[i]->Cells[j]->Value)
					MatrixGrid1->Rows[i]->Cells[j]->Value = 0;
				Mat1[i]->Add(System::Convert::ToInt32(MatrixGrid1->Rows[i]->Cells[j]->Value->ToString()));
			}
		}
		for (int i = 0; i < Matrix2Rows->Value; ++i) {
			Mat2.Add(gcnew List<int>);
			for (int j = 0; j < Matrix2Column->Value; ++j) {
				if (!MatrixGrid2->Rows[i]->Cells[j]->Value)
					MatrixGrid2->Rows[i]->Cells[j]->Value = 0;
				Mat2[i]->Add(System::Convert::ToInt32(MatrixGrid2->Rows[i]->Cells[j]->Value->ToString()));
			}
		}
	}

	private:
		System::Void PlusMatrix() {
			int n, m;
			n = System::Convert::ToInt32(Matrix1Rows->Value);
			m = System::Convert::ToInt32(Matrix1Column->Value);
			if (m != System::Convert::ToInt32(Matrix2Column->Value) || n != System::Convert::ToInt32(Matrix2Rows->Value)) {
				MessageBox::Show("Нельзя найти сумму, так как размеры матриц разные", "ERROR", MessageBoxButtons::OK);
				return;
			}
			ChangeGridSizes(Matrix2Rows->Value, Matrix2Column->Value, 3);
			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < m; ++j) {
					ResultMatrix->Rows[i]->Cells[j]->Value = (*Mat1[i])[j] + (*Mat2[i])[j];
				}
			}
		}

		System::Void MultMatrix() {
			ChangeGridSizes(Matrix1Rows->Value, Matrix2Column->Value, 3);
			if (System::Convert::ToInt32(Matrix1Rows->Value) != System::Convert::ToInt32(Matrix2Column->Value)) {
				MessageBox::Show("Нельзя найти произведение, так как кол-во строк матрицы А не совпадает с кол-вом Столбцов матрицы В", "ERROR", MessageBoxButtons::OK);
				return;
			}

			for (int i = 0; i < System::Convert::ToInt32(Matrix1Rows->Value); ++i) {
				for (int j = 0; j < System::Convert::ToInt32(Matrix2Column->Value); ++j) {
					ResultMatrix->Rows[i]->Cells[j]->Value = 0;
				}
			}

			for (int i = 0; i < System::Convert::ToInt32(Matrix1Rows->Value); ++i) {
				for (int j = 0; j < System::Convert::ToInt32(Matrix2Column->Value); ++j) {
					for (int k = 0; k < System::Convert::ToInt32(Matrix2Column->Value); ++k) {
						ResultMatrix->Rows[i]->Cells[j]->Value = System::Convert::ToInt32(ResultMatrix->Rows[i]->Cells[j]->Value) + ((*Mat1[i])[k] * (*Mat2[k])[j]);
					}
				}
			}
		}

		System::Void MultWithConst() {
			ChangeGridSizes(Matrix2Rows->Value, Matrix2Column->Value, 3);
			if (ConstText->Text == "") {
				MessageBox::Show("Укажите константу", "ERROR", MessageBoxButtons::OK);
				return;
			}
			int c = System::Convert::ToInt32(ConstText->Text);

			for (int i = 0; i < System::Convert::ToInt32(Matrix2Rows->Value); ++i) {
				for (int j = 0; j < System::Convert::ToInt32(Matrix2Column->Value); ++j) {
					ResultMatrix->Rows[i]->Cells[j]->Value = (*Mat2[i])[j] * c;
				}
			}
		}

		System::Void SubstractMatrix() {
			int n, m;
			n = System::Convert::ToInt32(Matrix1Rows->Value);
			m = System::Convert::ToInt32(Matrix1Column->Value);
			if (m != System::Convert::ToInt32(Matrix2Column->Value) || n != System::Convert::ToInt32(Matrix2Rows->Value)) {
				MessageBox::Show("Нельзя найти разность, так как размеры матриц разные", "ERROR", MessageBoxButtons::OK);
				return;
			}
			ChangeGridSizes(Matrix2Rows->Value, Matrix2Column->Value, 3);

			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < m; ++j) {
					ResultMatrix->Rows[i]->Cells[j]->Value = (*Mat1[i])[j] - (*Mat2[i])[j];
				}
			}
		}

		System::Void Determin() {

			int n = System::Convert::ToInt32(Matrix2Column->Value);
			if (n != System::Convert::ToInt32(Matrix2Rows->Value)) {
				MessageBox::Show("Нельзя найти определитель матрицы, так как она не квадратная", "ERROR", MessageBoxButtons::OK);
				return;
			}
			double tmp, d;

			ChangeGridSizes(Matrix2Rows->Value, Matrix2Column->Value, 3);

			double** a = new double* [n];
			for (int i = 0; i < n; i++) {
				a[i] = new double[n];
			}

			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < n; ++j) {
					a[i][j] = (*Mat2[i])[j];
				}
			}

			for (int k = 0; k < n - 1; k++) {
				for (int i = k + 1; i < n; i++) {
					tmp = -a[i][k] / a[k][k];
					for (int j = 0; j < n; j++) {
						a[i][j] += a[k][j] * tmp;
					}
				}
			}

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					ResultMatrix->Rows[i]->Cells[j]->Value = a[i][j];
				}

			}
			d = 1;
			for (int i = 0; i < n; i++) {
				d *= a[i][i];
			}

			DetLabel->Text = "Det(A) = " + d.ToString();
			DetLabel->Visible = true;

			for (int i = 0; i < n; i++) {
				delete[] a[i];
			}
		}

		System::Void Transp() {
			ChangeGridSizes(Matrix2Column->Value, Matrix2Rows->Value, 3);
			int temp;
			for (int i = 0; i < System::Convert::ToInt32(Matrix2Rows->Value); ++i) {
				for (int j = 0; j < System::Convert::ToInt32(Matrix2Column->Value); ++j) {
					ResultMatrix->Rows[j]->Cells[i]->Value = (*Mat2[i])[j];
				}
			}
		}
	private: System::Void HelpButton_Click(System::Object^ sender, System::EventArgs^ e) {
		HelpWindow^ hw = gcnew HelpWindow();
		hw->Show();
	}
	private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		draging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (draging) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X,
				currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		draging = false;
	}
	};
}
