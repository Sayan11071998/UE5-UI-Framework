#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FrontendLoadingScreenInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI)
class UFrontendLoadingScreenInterface : public UInterface
{
	GENERATED_BODY()
};

class UE5_FRONTEND_UI_API IFrontendLoadingScreenInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void OnLoadingScreenActivated();

	// virtual void OnLoadingScreenActivated_Implementation();

	UFUNCTION(BlueprintNativeEvent)
	void OnLoadingScreenDeactivated();

	// virtual void OnLoadingScreenDeactivated_Implementation();
};