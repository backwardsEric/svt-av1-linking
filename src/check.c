#include <windows.h>
#include <EbSvtAv1Enc.h>

INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
		PSTR lpCmdLine, INT nCmdShow)
{
	(void)svt_av1_get_version();
	return 0;
}
