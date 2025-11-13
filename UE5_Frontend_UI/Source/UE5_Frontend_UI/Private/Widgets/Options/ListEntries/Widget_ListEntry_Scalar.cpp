#include "Widgets/Options/ListEntries/Widget_ListEntry_Scalar.h"

void UWidget_ListEntry_Scalar::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

void UWidget_ListEntry_Scalar::OnOwningListDataObjectSet(TObjectPtr<UListDataObject_Base> InOwningListDataObject)
{
	Super::OnOwningListDataObjectSet(InOwningListDataObject);
}

void UWidget_ListEntry_Scalar::OnOwningListDataObjectModified(TObjectPtr<UListDataObject_Base> OwningModifiedData,
	EOptionsListDataModifyReason ModifyReason)
{
	
}