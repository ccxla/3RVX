#pragma once

#include "../3RVX/Window.h"

class UpdaterWindow : public Window {
public:
    UpdaterWindow();
    void DoModal();

private:
    HICON _smallIcon;
    HICON _largeIcon;

    HMENU _menu;
    UINT _menuFlags;

    virtual LRESULT WndProc(HWND hWnd, UINT message,
        WPARAM wParam, LPARAM lParam);

public:
    static const int MENU_INSTALL = 0;
    static const int MENU_IGNORE = 1;
    static const int MENU_REMIND = 2;

};