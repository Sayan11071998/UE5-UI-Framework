#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "FrontendGameUserSettings.generated.h"

UCLASS()
class UE5_FRONTEND_UI_API UFrontendGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()

public:
	UFrontendGameUserSettings();
	
	static TObjectPtr<UFrontendGameUserSettings> Get();

	UFUNCTION()
	FString GetCurrentGameDifficulty() const { return  CurrentGameDifficulty; }

	UFUNCTION()
	void SetCurrentGameDifficulty(const FString& InNewDifficulty) { CurrentGameDifficulty = InNewDifficulty; }

	UFUNCTION()
	float GetOverallVolume() const { return OverallVolume; }

	UFUNCTION()
	void SetOverallVolume(float InVolume);

private:
	UPROPERTY(Config)
	FString CurrentGameDifficulty;

	UPROPERTY(Config)
	float OverallVolume;
};