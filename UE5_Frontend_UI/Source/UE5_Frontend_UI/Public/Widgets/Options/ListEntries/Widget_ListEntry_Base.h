#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FrontendTypes/FrontendEnumTypes.h"
#include "Widget_ListEntry_Base.generated.h"

class UListDataObject_Base;
class UCommonTextBlock;

UCLASS(Abstract, BlueprintType, meta = (DisableNativeTick))
class UE5_FRONTEND_UI_API UWidget_ListEntry_Base : public UCommonUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()

public:
	void NativeOnListEntryWidgetHovered(bool bWasHovered);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On List Entry Widget Hovered"))
	void BP_OnListEntryWidgetHovered(bool bWasHovered, bool bIsEntryWidgetStillSelected);

protected:
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;
	virtual void OnOwningListDataObjectSet(TObjectPtr<UListDataObject_Base> InOwningListDataObject);
	virtual void OnOwningListDataObjectModified(TObjectPtr<UListDataObject_Base> OwningModifiedData, EOptionsListDataModifyReason ModifyReason);
	virtual FReply NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent) override;
	virtual void NativeOnEntryReleased() override;
	virtual void OnToggleEditableState(bool bIsEditable);
	virtual void OnOwningDependencyDataObjectModified(TObjectPtr<UListDataObject_Base> OwningModifiedDependencyData, EOptionsListDataModifyReason ModifyReason);
	virtual void NativeOnItemSelectionChanged(bool bIsSelected) override;
	
	void SelectThisEntryWidget();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Get Widget To Focus For Gamepad"))
	UWidget* BP_GetWidgetToFocusForGamepad() const;

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Toggle Entry Widget Highlight State"))
	void BP_OnToggleEntryWidgetHighlightState(bool bShouldHighlight) const;
	
private:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional, AllowPrivateAccess = "true"))
	TObjectPtr<UCommonTextBlock> CommonText_SettingDisplayName;

	UPROPERTY(Transient)
	TObjectPtr<UListDataObject_Base> CachedOwningDataObject;
};