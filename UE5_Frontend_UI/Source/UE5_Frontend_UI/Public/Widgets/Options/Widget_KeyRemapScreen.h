#pragma once

#include "CoreMinimal.h"
#include "Widgets/Widget_ActivatableBase.h"
#include "CommonInputTypeEnum.h"
#include "Widget_KeyRemapScreen.generated.h"

class UCommonRichTextBlock;
class FKeyRemapScreenInputPreprocessor;

UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class UE5_FRONTEND_UI_API UWidget_KeyRemapScreen : public UWidget_ActivatableBase
{
	GENERATED_BODY()

public:
	void SetDesiredInputTypeToFilter(ECommonInputType InDesiredInputType);

protected:
	virtual void NativeOnActivated() override;
	virtual void NativeOnDeactivated() override;

private:
	TSharedPtr<FKeyRemapScreenInputPreprocessor> CachedInputPreprocessor;
	ECommonInputType CachedDesiredInputType;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCommonRichTextBlock> CommonRichText_RemapMessage;
};