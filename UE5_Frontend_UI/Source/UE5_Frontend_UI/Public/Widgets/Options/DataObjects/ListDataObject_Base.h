#pragma once

#include "CoreMinimal.h"
#include "FrontendTypes/FrontendEnumTypes.h"
#include "FrontendTypes/FrontendStructTypes.h"
#include "ListDataObject_Base.generated.h"

#define LIST_DATA_ACCESSOR(DataType, PropertyName) \
	FORCEINLINE DataType Get##PropertyName() const { return PropertyName; } \
	void Set##PropertyName(DataType In##PropertyName) { PropertyName = In##PropertyName; }

UCLASS(Abstract)
class UE5_FRONTEND_UI_API UListDataObject_Base : public UObject
{
	GENERATED_BODY()

public:
	DECLARE_MULTICAST_DELEGATE_TwoParams(FOnListDataModifiedDelegate, TObjectPtr<UListDataObject_Base>, EOptionsListDataModifyReason)

	FOnListDataModifiedDelegate OnListDataModified;
	FOnListDataModifiedDelegate OnDependencyDataModified;
	
	LIST_DATA_ACCESSOR(FName, DataID)
	LIST_DATA_ACCESSOR(FText, DataDisplayName)
	LIST_DATA_ACCESSOR(FText, DescriptionRichText)
	LIST_DATA_ACCESSOR(FText, DisabledRichText)
	LIST_DATA_ACCESSOR(TSoftObjectPtr<UTexture2D>, SoftDescriptionImage)
	LIST_DATA_ACCESSOR(TObjectPtr<UListDataObject_Base>, ParentData)

	virtual TArray<UListDataObject_Base*> GetAllChildListData() const { return TArray<UListDataObject_Base*>(); }
	virtual bool HasAnyChildListData() const { return false; }
	virtual bool HasDefaultValue() const { return false; }
	virtual bool CanResetBackToDefaultValue() const { return false; }
	virtual bool TryResetBackToDefaultValue() { return false; }

	void InitDataObject();
	void SetShouldApplySettingsImmediately(bool bShouldApplyRightAway) { bShouldApplyChangeImmediately = bShouldApplyRightAway; }

	void AddEditCondition(const FOptionsDataEditConditionDescriptor& InEditCondition);
	void AddEditDependencyData(TObjectPtr<UListDataObject_Base> InDependencyData);
	bool IsDataCurrentlyEditable();

protected:
	virtual void OnDataObjectInitialized();
	virtual void NotifyListDataModified(TObjectPtr<UListDataObject_Base> ModifiedData, EOptionsListDataModifyReason ModifyReason = EOptionsListDataModifyReason::DirectlyModified);

	virtual bool CanSetToForcedStringValue(const FString& InForcedValue) const { return false; }
	virtual void OnSetToForcedStringValue(const FString& InForcedValue) {}
	virtual void OnEditDependencyDataModified(TObjectPtr<UListDataObject_Base> ModifiedDependencyData, EOptionsListDataModifyReason ModifyReason);
	
private:
	FName DataID;
	FText DataDisplayName;
	FText DescriptionRichText;
	FText DisabledRichText;
	TSoftObjectPtr<UTexture2D> SoftDescriptionImage;

	bool bShouldApplyChangeImmediately = false;

	UPROPERTY(Transient)
	TObjectPtr<UListDataObject_Base> ParentData;

	UPROPERTY(Transient)
	TArray<FOptionsDataEditConditionDescriptor> EditConditionDescArray;
};