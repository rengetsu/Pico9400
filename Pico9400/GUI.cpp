//	Далее включаем в программу заголовочные файлы
#include "GUI.h"		//	GUI.h - заголовочный файл графического интерфейса программы
#include <windows.h>

//	Используем пространоство имен Pico9400 для предоставления доступа к области для идентификаторов внутри нее
using namespace Pico9400;

//	Вызываем макрос, вызываемый объект очищает стек
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew GUI);
	return 0;
}