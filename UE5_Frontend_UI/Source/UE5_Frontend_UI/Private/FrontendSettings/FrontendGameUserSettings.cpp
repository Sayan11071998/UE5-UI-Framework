#include "FrontendSettings/FrontendGameUserSettings.h"

TObjectPtr<UFrontendGameUserSettings> UFrontendGameUserSettings::Get()
{
	if (GEngine)
	{
		return CastChecked<UFrontendGameUserSettings>(GEngine->GetGameUserSettings());
	}

	return nullptr;
}