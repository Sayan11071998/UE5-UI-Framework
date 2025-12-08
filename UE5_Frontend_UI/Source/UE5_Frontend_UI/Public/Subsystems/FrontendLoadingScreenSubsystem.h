#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FrontendLoadingScreenSubsystem.generated.h"

UCLASS()
class UE5_FRONTEND_UI_API UFrontendLoadingScreenSubsystem : public UGameInstanceSubsystem, public  FTickableGameObject
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLoadingReasonUpdatedDelegate, const FString&, CurrentLoadingReason);

	UPROPERTY(BlueprintAssignable)
	FOnLoadingReasonUpdatedDelegate OnLoadingReasonUpdated;
	
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual UWorld* GetTickableGameObjectWorld() const override;
	virtual void Tick(float DeltaTime) override;
	virtual ETickableTickType GetTickableTickType() const override;
	virtual bool IsTickable() const override;
	virtual TStatId GetStatId() const override;

private:
	void OnMapPreLoaded(const FWorldContext& WorldContext, const FString& MapName);
	void OnMapPostLoaded(UWorld* LoadedWorld);

	void TryUpdateLoadingScreen();
	void TryDisplayLoadingScreenIfNone();
	void TryRemoveLoadingScreen();

	void NotifyLoadingScreenVisibilityChanged(bool bIsVisible);
	
	bool IsPreLoadScreenActive() const;
	bool ShouldShowLoadingScreen();
	bool CheckTheNeedToShowLoadingScreen();
	
	float HoldLoadingScreenStartupTime = -1.f;
	bool bIsCurrentlyLoadingMap = false;
	FString CurrentLoadingReason;
	TSharedPtr<SWidget> CachedCreatedLoadingScreenWidget;
};