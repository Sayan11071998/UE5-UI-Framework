#pragma once

#include "CoreMinimal.h"
#include "Widgets/Widget_ActivatableBase.h"
#include "FrontendTypes/FrontendEnumTypes.h"
#include "Widget_ConfirmScreen.generated.h"

class UDynamicEntryBox;
class UCommonTextBlock;

USTRUCT(BlueprintType)
struct FConfirmScreenButtonInfo
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EConfirmScreenButtonType ConfirmScreenButtonType = EConfirmScreenButtonType::Unknown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ButtonTextToDisplay;
};

UCLASS()
class UE5_FRONTEND_UI_API UConfirmScreenInfoObject : public UObject
{
	GENERATED_BODY()

public:
	static TObjectPtr<UConfirmScreenInfoObject> CreateOKScreen(const FText& InScreenTitle, const FText& InScreenMessage);
	static TObjectPtr<UConfirmScreenInfoObject> CreateYesNoScreen(const FText& InScreenTitle, const FText& InScreenMessage);
	static TObjectPtr<UConfirmScreenInfoObject> CreateOkCancelScreen(const FText& InScreenTitle, const FText& InScreenMessage);
	
	UPROPERTY(Transient)
	FText ScreenTitle;

	UPROPERTY(Transient)
	FText ScreenMessage;

	UPROPERTY(Transient)
	TArray<FConfirmScreenButtonInfo> AvailableScreenButtons;
};

UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class UE5_FRONTEND_UI_API UWidget_ConfirmScreen : public UWidget_ActivatableBase
{
	GENERATED_BODY()

public:
	void InitConfirmScreen(TObjectPtr<UConfirmScreenInfoObject> InScreenInfoObject, TFunction<void(EConfirmScreenButtonType)> ClickedButtonCallback);

protected:
	virtual UWidget* NativeGetDesiredFocusTarget() const override;

private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCommonTextBlock> CommonTextBlock_Title;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCommonTextBlock> CommonTextBlock_Message;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UDynamicEntryBox> DynamicEntryBox_Buttons;
};