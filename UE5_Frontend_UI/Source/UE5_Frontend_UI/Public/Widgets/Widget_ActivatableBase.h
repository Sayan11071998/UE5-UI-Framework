#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Widget_ActivatableBase.generated.h"

UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class UE5_FRONTEND_UI_API UWidget_ActivatableBase : public UCommonActivatableWidget
{
	GENERATED_BODY()
};