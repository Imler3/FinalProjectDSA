//created by Hannah Imler 8/3/2024

#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FinalProjectDSA::MyForm form;
	Application::Run(% form);
}

