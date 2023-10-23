#include "GameApp.h"

#include <iostream>

#include "../SexyAppFramework/WidgetManager.h"
#include "../SexyAppFramework/Common.h"
#include "../SexyAppFramework/ogg/misc.h"

using namespace Sexy;

GameApp* gGameApp = nullptr;

/*
static const char* aLoadingGroups[3] = {
    "Plants",
    "Zombies",
    "Misc"
};
*/

int GameApp::GetNumResources()
{
    /*
    int aResult = 0;
    for (const char* aGroup : aLoadingGroups)
    {
        aResult += mResourceManager->GetNumResources(aGroup);
    }
    return aResult;
    */
    return 0;
}


GameApp::GameApp()
{
    mProdName = "Casual Weedlings";
    mProductVersion = "1.0";
    mTitle = StringToSexyStringFast(mProdName + " - " + mProductVersion);
    mRegKey = "Jeremy\\SexyAppFramework\\CWEEDLINGS";
    mWidth = 800;
    mHeight = 600;

    //mLocale = new JeremyLocale(this);
    //mLocale->mCurrentLocale = _S("English");
    //std::cout << mLocale->GetLocale("TestText") << std::endl;
}

GameApp::~GameApp()
{
    //if (mTitlescreen)
    //    delete mTitlescreen;

    mWidgetManager->RemoveAllWidgets();
    //mResourceManager->DeleteResources("");
}

void GameApp::Init()
{
    SexyAppBase::Init();

    /*
    LoadResourceManifest();

    if (!LoadGroup("Init", false))
    {
        return;
    }

    mTitlescreen = new Titlescreen(this);
    mTitlescreen->Init();
    mTitlescreen->Resize(0, 0, mWidth, mHeight);
    mWidgetManager->AddWidget(mTitlescreen);

    SetCursorImage(CURSOR_POINTER, IMAGE_CURSOR_POINTER);
    SetCursorImage(CURSOR_HAND, IMAGE_CURSOR_HAND);
    SetCursorImage(CURSOR_DRAGGING, IMAGE_CURSOR_DRAGGING);

    EnableCustomCursors(true);

    mNumLoadingThreadTasks = GetNumResources();
    */
}

void GameApp::LoadingThreadProc()
{
    /*
    for (const char* aGroup : aLoadingGroups)
    {
        if (!LoadGroup(aGroup, 1))
        {
            return;
        }
    }
    */
}

void GameApp::LoadingThreadCompleted()
{
    /*
    SexyAppBase::LoadingThreadCompleted();
    if (mLoadingFailed)
        return;

    mTitlescreen->mLoadButton->SetDisabled(false);
    mTitlescreen->mLoadButton->SetVisible(true);
    */
}

void GameApp::TitlescreenIsFinished()
{
    /*
    mBoard = new Board(this);
    mBoard->Resize(0, 0, mWidth, mHeight);
    //mBoard->Init();
    mWidgetManager->AddWidget(mBoard);
    mWidgetManager->SetFocus(mBoard);
    */
}


bool GameApp::LoadGroup(const char* theGroupName, bool theMarkDirty)
{
    /*
    //JeremyTrace("Loading Group %s", theGroupName);
    mResourceManager->StartLoadResources(theGroupName);
    while (!mShutdown && !mLoadingFailed && mResourceManager->LoadNextResource())
    {
        mCompletedLoadingThreadTasks += 1;
        if (mShutdown)
            return false;
        if (theMarkDirty)
            mTitlescreen->MarkDirty();
    }

    if (mResourceManager->HadError() || !ExtractResourcesByName(mResourceManager, theGroupName))
    {
        ShowResourceError(true);
        mLoadingFailed = true;

        return false;
    }
    return true;
    */
    return false;
}