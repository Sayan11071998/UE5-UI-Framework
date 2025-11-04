#pragma once

#include "CoreMinimal.h"
#include "OptionsDataRegistry.generated.h"

class UListDataObject_Collection;

UCLASS()
class UE5_FRONTEND_UI_API UOptionsDataRegistry : public UObject
{
	GENERATED_BODY()

public:
	void InitOptionsDataRegistry(TObjectPtr<ULocalPlayer> InOwningLocalPlayer);
	const TArray<UListDataObject_Collection*>& GetRegisteredOptionsTabCollections() const { return RegisteredOptionsTabCollections; }

private:
	void InitGameplayCollectionTab();
	void InitAudioCollectionTab();
	void InitVideoCollectionTab();
	void InitControlCollectionTab();

	UPROPERTY(Transient)
	TArray<UListDataObject_Collection*> RegisteredOptionsTabCollections;
};