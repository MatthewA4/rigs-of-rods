#pragma once

// ----------------------------------------------------------------------------
// Generated by MyGUI's LayoutEditor using RoR's code templates.
// Find the templates at [repository]/tools/MyGUI_LayoutEditor/
//
// IMPORTANT:
// Do not modify this code directly. Create a derived class instead.
// ----------------------------------------------------------------------------

#include "ForwardDeclarations.h"
#include "BaseLayout.h"

namespace RoR
{

namespace GUI
{
	
ATTRIBUTE_CLASS_LAYOUT(GamePauseMenuLayout, "PauseMenu.layout");
class GamePauseMenuLayout : public wraps::BaseLayout
{

public:

	GamePauseMenuLayout(MyGUI::Widget* _parent = nullptr);
	virtual ~GamePauseMenuLayout();

protected:

	//%LE Widget_Declaration list start
	ATTRIBUTE_FIELD_WIDGET_NAME(GamePauseMenuLayout, m_resume_game, "resume_game");
	MyGUI::Button* m_resume_game;

	ATTRIBUTE_FIELD_WIDGET_NAME(GamePauseMenuLayout, m_change_map, "change_map");
	MyGUI::Button* m_change_map;

	ATTRIBUTE_FIELD_WIDGET_NAME(GamePauseMenuLayout, m_back_to_menu, "back_to_menu");
	MyGUI::Button* m_back_to_menu;

	ATTRIBUTE_FIELD_WIDGET_NAME(GamePauseMenuLayout, m_rig_editor, "rig_editor");
	MyGUI::Button* m_rig_editor;

	ATTRIBUTE_FIELD_WIDGET_NAME(GamePauseMenuLayout, m_quit_game, "quit_game");
	MyGUI::Button* m_quit_game;

	//%LE Widget_Declaration list end
};

} // namespace GUI

} // namespace RoR
