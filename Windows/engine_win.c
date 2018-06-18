#include <windows.h>
#include <windowsx.h>
#include <tchar.h>

LRESULT CALLBACK WindowProc(
		HWND hWnd,
		UINT message,
		WPARAM wParam,
		LPARAM lParam);

int WINAPI WinMain(HINSTANCE hInstance,
		HINSTANCE hPrevInstance,
		LPTSTR lpCmdLine,
		int nCmdShow)
{
	// the handle for the window,filled by a function
	HWND hWnd;
	// this struct holds infomation for the window class
	WNDCLASSEX wc;
	
	// clear out the window class for use
	ZeroMemory(&wc, sizeof(WNDCLASSEX));

	// fill in the struct with the needed information
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = CS_HREDRAM | CS_VREDRAM;
	wc.lpfnWndProc = hInstance;
	wc.hCursor = LoadCursor(NULL,IDC_ARROW);
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.lpszClassName = _T("WindowsClass1");

	//register the window class
	RegisterClassEx(&wc);

	//create the window and use the result as the handle
	hWnd = CreateWindowEx(0,
			_T("WindowClass1"),
			dow and use the result as the handle
