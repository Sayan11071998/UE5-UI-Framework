#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FrontendUISubsystem.generated.h"

class UWidget_PrimaryLayout;

UCLASS()
class UE5_FRONTEND_UI_API UFrontendUISubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	static TObjectPtr<UFrontendUISubsystem> Get(const TObjectPtr<UObject> WorldContextObject);

	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;

	UFUNCTION(BlueprintCallable)
	void RegisterCreatedPrimaryLayoutWidget(UWidget_PrimaryLayout* InCreatedWidget);

private:
	UPROPERTY(Transient)
	TObjectPtr<UWidget_PrimaryLayout> CreatedPrimaryLayout;
};