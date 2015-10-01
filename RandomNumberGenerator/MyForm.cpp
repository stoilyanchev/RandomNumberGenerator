#include "MyForm.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	RandomNumberGenerator::MyForm form;
	Application::Run(%form);
}