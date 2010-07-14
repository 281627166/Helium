///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version May  4 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __LunaGenerated__
#define __LunaGenerated__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/srchctrl.h>
#include <wx/toolbar.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/listbox.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/statbmp.h>
#include <wx/scrolwin.h>
#include <wx/notebook.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class LunaFrameGenerated
///////////////////////////////////////////////////////////////////////////////
class LunaFrameGenerated : public wxFrame 
{
	private:
	
	protected:
		enum
		{
			ID_NewScene = 1000,
			ID_NewEntity,
			ID_Open,
			ID_SaveAll,
		};
		
		wxMenuBar* m_MainMenuBar;
		wxMenu* m_MenuFile;
		wxMenu* m_MenuFileNew;
		wxMenu* m_MenuFileOpenRecent;
		wxMenu* m_MenuEdit;
		wxMenu* m_MenuView;
		wxMenu* m_MenuViewHelper;
		wxMenu* m_MenuViewGeometry;
		wxMenu* m_MenuViewShading;
		wxMenu* m_MenuViewCamera;
		wxMenu* m_MenuViewCulling;
		wxMenu* m_MenuViewShow;
		wxMenu* m_MenuViewHide;
		wxMenu* m_MenuViewColorMode;
		wxMenu* m_MenuViewDefaults;
		wxMenu* m_MenuTools;
		wxMenu* m_MenuPanels;
		wxMenu* m_MenuSettings;
		wxMenu* m_MenuHelp;
		wxToolBar* m_MainToolbar;
		wxSearchCtrl* m_ToolVaultSearch;
		wxStatusBar* m_MainStatusBar;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnNew( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOpen( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveAll( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		LunaFrameGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 878,642 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		~LunaFrameGenerated();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class HelpPanelGenerated
///////////////////////////////////////////////////////////////////////////////
class HelpPanelGenerated : public wxPanel 
{
	private:
	
	protected:
		wxRichTextCtrl* m_HelpRichText;
	
	public:
		
		HelpPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
		~HelpPanelGenerated();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class LayersPanelGenerated
///////////////////////////////////////////////////////////////////////////////
class LayersPanelGenerated : public wxPanel 
{
	private:
	
	protected:
		wxToolBar* m_LayersToolbar;
		wxPanel* m_LayersPanel;
	
	public:
		
		LayersPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
		~LayersPanelGenerated();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class VaultPanelGenerated
///////////////////////////////////////////////////////////////////////////////
class VaultPanelGenerated : public wxPanel 
{
	private:
	
	protected:
		wxPanel* m_NavigationPanel;
		wxBitmapButton* m_BackButton;
		wxBitmapButton* m_ForwardButton;
		wxSearchCtrl* m_SearchCtrl;
		wxBitmapButton* m_OptionsButton;
		wxListBox* m_SourceListBox;
		wxPanel* m_ResultsPanel;
	
	public:
		
		VaultPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 773,453 ), long style = wxTAB_TRAVERSAL );
		~VaultPanelGenerated();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DetailsPanelGenerated
///////////////////////////////////////////////////////////////////////////////
class DetailsPanelGenerated : public wxPanel 
{
	private:
	
	protected:
		wxScrolledWindow* m_ScrollWindow;
		wxStaticText* m_LabelName;
		wxTextCtrl* m_Name;
		wxStaticText* m_LabelFileType;
		wxTextCtrl* m_FileType;
		wxStaticText* m_LabelFileID;
		wxTextCtrl* m_FileID;
		wxStaticText* m_LabelFolder;
		wxTextCtrl* m_Folder;
		wxPanel* m_RevisionPanel;
		wxStaticText* m_LabelPerforce;
		wxStaticText* m_LabelRevisionStatus;
		wxPanel* m_StatusPanel;
		wxStaticBitmap* m_RevisionStatusIcon;
		wxStaticText* m_RevisionStatus;
		wxPanel* m_LastCheckInPanel;
		wxStaticText* m_LabelLastCheckIn;
		wxTextCtrl* m_LastCheckIn;
		wxPanel* m_FirstCheckInPanel;
		wxStaticText* m_LabelFirstCheckIn;
		wxTextCtrl* m_FirstCheckIn;
	
	public:
		
		DetailsPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 300,421 ), long style = wxTAB_TRAVERSAL );
		~DetailsPanelGenerated();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ToolsPanelGenerated
///////////////////////////////////////////////////////////////////////////////
class ToolsPanelGenerated : public wxPanel 
{
	private:
	
	protected:
		wxPanel* m_ToolsPanel;
		wxPanel* m_PropertiesPanel;
	
	public:
		
		ToolsPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 453,470 ), long style = wxTAB_TRAVERSAL );
		~ToolsPanelGenerated();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class TypesPanelGenerated
///////////////////////////////////////////////////////////////////////////////
class TypesPanelGenerated : public wxPanel 
{
	private:
	
	protected:
	
	public:
		
		TypesPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
		~TypesPanelGenerated();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class DirectoryPanelGenerated
///////////////////////////////////////////////////////////////////////////////
class DirectoryPanelGenerated : public wxPanel 
{
	private:
	
	protected:
		wxNotebook* m_DirectoryNotebook;
		wxPanel* m_HierarchyPanel;
		wxPanel* m_EntitiesPanel;
		wxPanel* m_TypesPanel;
	
	public:
		
		DirectoryPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
		~DirectoryPanelGenerated();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class PropertiesPanelGenerated
///////////////////////////////////////////////////////////////////////////////
class PropertiesPanelGenerated : public wxPanel 
{
	private:
	
	protected:
	
	public:
		
		PropertiesPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL );
		~PropertiesPanelGenerated();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ViewPanelGenerated
///////////////////////////////////////////////////////////////////////////////
class ViewPanelGenerated : public wxPanel 
{
	private:
	
	protected:
		wxToolBar* m_ToolbarView;
		wxPanel* m_ViewPanel;
	
	public:
		
		ViewPanelGenerated( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 766,617 ), long style = wxTAB_TRAVERSAL );
		~ViewPanelGenerated();
	
};

#endif //__LunaGenerated__