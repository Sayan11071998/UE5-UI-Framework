#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "FrontendGameUserSettings.generated.h"

UCLASS()
class UE5_FRONTEND_UI_API UFrontendGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:
	static TObjectPtr<UFrontendGameUserSettings> Get();

private:
	UPROPERTY(Config)
	FString CurrentGameDifficulty;
};