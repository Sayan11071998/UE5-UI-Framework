#pragma once

#include "CoreMinimal.h"
#include "FrontendTypes/FrontendEnumTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Widgets/Widget_ActivatableBase.h"
#include "FrontendUISubsystem.generated.h"

class UFrontendCommonButtonBase;
struct FGameplayTag;
class UWidget_PrimaryLayout;
class UWidget_ActivatableBase;

enum class EAsyncPushWidgetState : uint8
{
	OnCreatedBeforePush,
	AfterPush
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnButtonDescriptionTextUpdatedDelegate, UFrontendCommonButtonBase*, BroadcastingButton, FText, DescriptionText);

UCLASS()
class UE5_FRONTEND_UI_API UFrontendUISubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	static TObjectPtr<UFrontendUISubsystem> Get(const TObjectPtr<UObject> WorldContextObject);
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	void PushSoftWidgetToStackAsync(const FGameplayTag& InWidgetStackTag, TSoftClassPtr<UWidget_ActivatableBase> InSoftWidgetClass, TFunction<void(EAsyncPushWidgetState, UWidget_ActivatableBase*)> AsyncPushStateCallback);
	void PushConfirmScreenToModelStackAsync(EConfirmScreenType InScreenType, const FText& InScreenTitle, const FText& InScreenMessage, TFunction<void(EConfirmScreenButtonType)> ButtonClickedCallback);
	
	UFUNCTION(BlueprintCallable)
	void RegisterCreatedPrimaryLayoutWidget(UWidget_PrimaryLayout* InCreatedWidget);

	UPROPERTY(BlueprintAssignable)
	FOnButtonDescriptionTextUpdatedDelegate OnButtonDescriptionTextUpdated;

private:
	UPROPERTY(Transient)
	TObjectPtr<UWidget_PrimaryLayout> CreatedPrimaryLayout;
};