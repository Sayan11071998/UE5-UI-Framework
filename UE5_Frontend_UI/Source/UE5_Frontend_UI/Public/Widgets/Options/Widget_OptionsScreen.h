#pragma once

#include "CoreMinimal.h"
#include "FrontendTypes/FrontendEnumTypes.h"
#include "Widgets/Widget_ActivatableBase.h"
#include "Widget_OptionsScreen.generated.h"

class UListDataObject_Base;
class UWidget_OptionsDetailsView;
class UFrontendTabListWidgetBase;
class UOptionsDataRegistry;
class UFrontendCommonListView;

UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class UE5_FRONTEND_UI_API UWidget_OptionsScreen : public UWidget_ActivatableBase
{
	GENERATED_BODY()

protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeOnActivated() override;
	virtual void NativeOnDeactivated() override;
	virtual UWidget* NativeGetDesiredFocusTarget() const override;

private:
	void OnResetBoundActionTriggered();
	void OnBackBoundActionTriggered();
	void OnListViewItemHovered(UObject* InHoveredItem, bool bWasHovered);
	void OnListViewItemSelected(UObject* InSelectedItem);
	void OnListViewListDataModified(TObjectPtr<UListDataObject_Base> ModifiedData, EOptionsListDataModifyReason ModifyReason);

	TObjectPtr<UOptionsDataRegistry> GetOrCreateDataRegistry();
	FString TryGetEntryWidgetClassName(TObjectPtr<UObject> InOwningListItem) const;

	FUIActionBindingHandle ResetActionHandle;
	bool bIsResettingData = false;
	
	UPROPERTY(EditDefaultsOnly, Category = "Frotend Options Screen", meta = (RowType = "/Script/CommonUI.CommonInputActionDataBase"))
	FDataTableRowHandle ResetAction;

	UPROPERTY(Transient)
	TObjectPtr<UOptionsDataRegistry> CreatedOwningDataRegistry;

	UPROPERTY(Transient)
	TArray<UListDataObject_Base*> ResettableDataArray;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UFrontendTabListWidgetBase> TabListWidget_OptionsTabs;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UFrontendCommonListView> CommonListView_OptionsList;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UWidget_OptionsDetailsView> DetailsView_ListEntryInfo;

	UFUNCTION()
	void OnOptionsTabSelected(FName TabID);
};