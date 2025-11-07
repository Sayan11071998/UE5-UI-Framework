#pragma once

#include "CoreMinimal.h"
#include "Widgets/Options/ListEntries/Widget_ListEntry_Base.h"
#include "Widget_ListEntry_String.generated.h"

class UFrontendCommonRotator;
class UFrontendCommonButtonBase;

UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class UE5_FRONTEND_UI_API UWidget_ListEntry_String : public UWidget_ListEntry_Base
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = "true"))
	TObjectPtr<UFrontendCommonButtonBase> CommonButton_PreviousOption;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = "true"))
	TObjectPtr<UFrontendCommonRotator> CommonRotator_AvailableOptions;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget, AllowPrivateAccess = "true"))
	TObjectPtr<UFrontendCommonButtonBase> CommonButton_NextOption;
};