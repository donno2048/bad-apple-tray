#include <windows.h>
#define FRAMES 6572
#define FPS 30
int main() {
	NOTIFYICONDATA nid = {sizeof(nid), CreateWindowEx(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0), 1, NIF_ICON};
	ShowWindow(FindWindowA("ConsoleWindowClass", 0), 0);
	Shell_NotifyIcon(NIM_ADD, &nid);
	for (int f = 0; Shell_NotifyIcon(NIM_MODIFY, &nid); f = (f + 1) % FRAMES, Sleep(1000 / FPS))
		nid.hIcon = LoadIcon(GetModuleHandle(0) , MAKEINTRESOURCE(f));
}