#include "GUI.h"
#include <windows.h>

using namespace Pico9400;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew GUI);
	return 0;
}