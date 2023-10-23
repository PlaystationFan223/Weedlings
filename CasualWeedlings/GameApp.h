#pragma once

#include "../SexyAppFramework/SexyAppBase.h"
#include "../SexyAppFramework/ResourceManager.h"
//#include "Resources/Res.h"

using namespace Sexy;

class GameApp : public SexyAppBase
{
private:
    int GetNumResources();
    bool LoadGroup(const char* theGroupName, bool theMarkDirty = true);
public:

    GameApp();
    virtual ~GameApp();
    virtual void    Init();
    virtual void    LoadingThreadProc();
    virtual void    LoadingThreadCompleted();
    void            TitlescreenIsFinished();
};

extern GameApp* gGameApp;
