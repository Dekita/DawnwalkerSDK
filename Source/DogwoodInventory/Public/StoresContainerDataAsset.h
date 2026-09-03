#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "StoresContainerDataAsset.generated.h"

class UStoreDataAsset;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UStoresContainerDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UStoreDataAsset*> StoresMap;
    
    UStoresContainerDataAsset();

};

