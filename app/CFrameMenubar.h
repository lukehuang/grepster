/**
 * @file    CWebViewer.h
 * @author  Allen Vanderlinde
 * @date    November 5, 2014
 * @brief   wxWidgets menu bar control class definition.
 */
/*
    Copyright (C) 2014 by Allen Vanderlinde.
    Songbird and its source code is licensed under the GNU General Public License (GPL)
    and is subject to the terms and conditions provided in LICENSE.txt.
*/

#ifndef _CFRAMEMENUBAR_H_
#define _CFRAMEMENUBAR_H_

#include <wx/wx.h>

/* Strings array. */
/** Menu bar menu strings. */
const wxString FRAME_MENUBAR_STRINGS[]      = {"&File",
                                               "&Tools",
                                               "&Options",
                                               "&Help"};
/** Menu bar menu item strings. */
const wxString FRAME_MENU_STRINGS[]         = {"&Quit\tCtrl+Q",
                                               "&Launch PuTTY\tCtrl+P",
                                               "Toggle Floating Controls",
                                               "About grepster..."};
/** Status bar strings. These are the labels displayed for each menu item. */
const wxString FRAME_STATUSBAR_STRINGS[]    = {"Quit grepster.",
                                               "Launch PuTTY.",
                                               "Allow the client list, console, and notebook to be un-docked from grepster.",
                                               "About grepster."};

/** GUI frame menu string IDs. */
enum e_FrameMenuStringIDs {
    FRAME_ID_FILE_MENU = 0,
    FRAME_ID_TOOLS_MENU,
    FRAME_ID_OPTIONS_MENU,
    FRAME_ID_HELP_MENU
};

/** GUI frame menu item string IDs. */
enum e_MenuItemStringIDs {
    FRAME_MENU_STRING_ID_QUIT = 0,
    FRAME_MENU_STRING_ID_LAUNCH_PUTTY,
    FRAME_MENU_STRING_ID_TOGGLE_DOCKABLE,
    FRAME_MENU_STRING_ID_ABOUT
};

/** Status bar string IDs. */
enum e_StatusbarStringIDs {
    STATUSBAR_STRING_ID_QUIT = 0,
    STATUSBAR_STRING_ID_LAUNCH_PUTTY,
    STATUSBAR_STRING_ID_TOGGLE_DOCKABLE,
    STATUSBAR_STRING_ID_ABOUT
};

/* CREATE TOOLS MENU FOR LAUNCHING PUTTY, ETC... */

/** Menu bar item IDs */
enum e_MenuFunctionIDs {
    MENU_FUNCTION_ID_FILE_QUIT = 9000,
    MENU_FUNCTION_ID_TOOLS_LAUNCH_PUTTY,
    MENU_FUNCTION_ID_OPTIONS_TOGGLE_FLOATABLE,
    MENU_FUNCTION_ID_HELP_ABOUT
};

/**
 * This object creates grepster's menu bar.
 *
 * @class   CFrameMenubar
 * @brief   Class definition for grepster's menu bar control.
 */
class CFrameMenubar : public wxMenuBar {
public:
    /**
     * @brief   Default constructor which builds menu bar.
     */
    CFrameMenubar();

private:
    /** File menu. */
    wxMenu* m_file_menu;
    /** Tools menu. */
    wxMenu* m_tools_menu;
    /** Options menu. */
    wxMenu* m_options_menu;
    /** Help menu. */
    wxMenu* m_help_menu;
};

#endif
