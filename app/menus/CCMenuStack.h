/**
 * @file    CCMenuStack.h
 * @author  Allen Vanderlinde
 * @date    April 5, 2015
 * @brief   wxMenu object used as the context menu for a server stack.
 */
/*
    Copyright (C) 2014-2015 by Allen Vanderlinde.
    grepster and its source code is licensed under the GNU General Public License (GPL)
    and is subject to the terms and conditions provided in LICENSE.txt.
*/

#ifndef _CCMENUSTACK_H_
#define _CCMENUSTACK_H_


/**
 * This object creates a wxMenu used as the context menu for a server stack with
 * its respective functions and information.
 *
 * @class   CCMenuStack
 * @brief   Class definition for this context menu object.
 */
class CCMenuStack : public wxMenu {
public:
    /**
     * @brief       Default constructor which creates the context menu.
     * @param[in]   name The string/label of the selected server stack.
     */
    CCMenuStack(wxString name);
    /**
     * @brief       Default destructor.
     */
    ~CCMenuStack();

    /**
    * @enum        enum_ContextMenuItemIDs
    * @brief       These represent the context menu's individual function call IDs.
    */
    enum enum_ContextMenuItemIDs {
        CLOSE_STACK = wxID_ANY
    };

private:
    /** @brief      Name of the selected server stack which owns this context menu. */
    wxString        m_szName;

    /**
     * @brief       Close the selected stack.
     */
    void Close(wxCommandEvent& event);

    /**
     * @brief       Initialize and call the object's event handler.
     */
    wxDECLARE_EVENT_TABLE();
};

#endif // _CCMENUSTACK_H_