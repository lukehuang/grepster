/**
 * @file    CNotebook.h
 * @author  Allen Vanderlinde
 * @date    November 20, 2014
 * @brief   wxWidgets AUI notebook control class definition.
 */
/*
    Copyleft (C) 2014-2015 by Allen Vanderlinde.
    Songbird and its source code is licensed under the GNU General Public License (GPL)
    and is subject to the terms and conditions provided in LICENSE.txt.
*/

#ifndef _CNOTEBOOK_H
#define _CNOTEBOOK_H

#include "../../web-viewer/CWebViewer.h"
#include "../../../session/CAdminStack.h"


/* Note: These are defined here but not actually relevant because
    of a wxWidgets limitation being that wxAuiNotebook controls can not yet float. */
#define NOTEBOOK_DEFAULT_WIDTH      500
#define NOTEBOOK_DEFAULT_HEIGHT     540
/** Welcome page's caption. */
#define NOTEBOOK_GREETING           L"Welcome to grepster!"


/**
 * This object creates grepster's notebook for data entry and command execution.
 *
 * @class   CNotebook
 * @brief   Class definition for grepster's notebook control.
 */
class CNotebook : public wxAuiNotebook {
public:
    /**
     * @brief       Default constructor which produces the notebook.
     * @param[in]   parentFrame The primary frame to which this control belongs.
     */
    CNotebook(wxWindow* parentFrame);

    /**
     * @brief       Get notebook control's pane information.
     * @retval      wxAuiPaneInfo This is the notebook control's display configuration object.
     */
    wxAuiPaneInfo Info() { return m_NotebookInf_t; }

    /**
     * @brief       Opens the contents of a server stack into a new page
     *              for editing.
     * @param[in]   stack The CAdminStack object to read and edit.
     */
    void OpenPage(CAdminStack stack);

    /**
     * @brief       Creates a new CWebViewer object and opens grepster's home page.
     */
    void OpenWelcomePage();
    /**
     * @brief       Saves the selected server stack to its original file.
     */
    void SavePage();
    /**
     * @brief       Close the selected page. If the last
     *              page was closed, open the welcome page.
     */
    void ClosePage(wxAuiNotebookEvent& event);

    /**
     * @enum        enum_NotebookPageIDs
     * @brief       These represent the pages added to the notebook.
     */
    enum enum_NotebookPageIDs {
        NEW_PAGE = 12001
    };

private:
    /** @brief      The browser control to use for grepster's welcome and updates page. */
    CWebViewer*             m_pBrowser;
    /** @brief      This object holds wxWidgets AUI settings for the control. */
    wxAuiPaneInfo           m_NotebookInf_t;

    /**
     * @brief       Initialize and call the object's event handler.
     */
    wxDECLARE_EVENT_TABLE();
};

#endif
