#include "Widgets/Options/DataObjects/ListDataObject_StringResolution.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Widgets/Options/OptionsDataInteractionHelper.h"

#include "FrontendDebugHelper.h"

void UListDataObject_StringResolution::InitResolutionValues()
{
	TArray<FIntPoint> AvailableResolutions;
	UKismetSystemLibrary::GetSupportedFullscreenResolutions(AvailableResolutions);

	for (const FIntPoint& Resolution : AvailableResolutions)
	{
		// Available Resolution: X=1920 Y=1080
		// Resolution value from Dynamic Getter(X=1536,Y=864)
		Debug::Print(TEXT("Available Resolution: ") + Resolution.ToString());
	}
}

void UListDataObject_StringResolution::OnDataObjectInitialized()
{
	Super::OnDataObjectInitialized();

	if (DataDynamicGetter)
	{
		Debug::Print(TEXT("Resolution value from Dynamic Getter") + DataDynamicGetter->GetValueAsString());
	}
}