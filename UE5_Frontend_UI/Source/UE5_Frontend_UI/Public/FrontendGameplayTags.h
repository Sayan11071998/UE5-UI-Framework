#pragma once

#include "NativeGameplayTags.h"

namespace FrontendGameplayTags
{
	// Frontend Widget Stack
	UE5_FRONTEND_UI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_WidgetStack_Modal);
	UE5_FRONTEND_UI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_WidgetStack_GameMenu);
	UE5_FRONTEND_UI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_WidgetStack_GameHud);
	UE5_FRONTEND_UI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_WidgetStack_Frontend);
	
	// Frontend Widgets
	UE5_FRONTEND_UI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_Widget_PressAnyKeyScreen);
	UE5_FRONTEND_UI_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Frontend_Widget_MainMenuScreen);
}