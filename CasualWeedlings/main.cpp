#include "GameApp.h"

using namespace Sexy;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    gHInstance = hInstance;
    gGameApp = new GameApp();
    gGameApp->Init();
    gGameApp->Start();

    gGameApp->Shutdown();
    delete gGameApp;
    return 0;
}