#include <Windows.h>
#include "rez_filter.h"
#pragma comment(lib, "user32.lib")

using namespace System; using namespace System::Windows::Forms;
using namespace rezfilter;
[STAThread]
INT WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){
	Application::EnableVisualStyles();
	Application::Run(gcnew rez__filter());
	return FALSE;
}

