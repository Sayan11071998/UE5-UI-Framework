#pragma once

#include "CoreMinimal.h"
#include "CommonListView.h"
#include "FrontendCommonListView.generated.h"

class UDataAsset_DataListEntryMapping;

UCLASS()
class UE5_FRONTEND_UI_API UFrontendCommonListView : public UCommonListView
{
	GENERATED_BODY()

protected:
	virtual UUserWidget& OnGenerateEntryWidgetInternal(UObject* Item, TSubclassOf<UUserWidget> DesiredEntryClass, const TSharedRef<STableViewBase>& OwnerTable) override;
	virtual bool OnIsSelectableOrNavigableInternal(UObject* FirstSelectedItem) override;
	
private:
#if WITH_EDITOR	
	virtual void ValidateCompiledDefaults(class IWidgetCompilerLog& CompileLog) const override;
#endif
	
	UPROPERTY(EditAnywhere, Category = "Frontend List View Settings")
	TObjectPtr<UDataAsset_DataListEntryMapping> DataListEntryMapping;
};