#include "stdafx.h"
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ConsoleApplication1;


int main(array<String^> ^args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	ConsoleApplication1::MyForm form;
	Application::Run(%form);

}