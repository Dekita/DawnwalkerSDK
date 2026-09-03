#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ItemBaseDataAsset.h"
#include "ItemCharDevDataAsset.generated.h"

class UReadableDataAsset;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UItemCharDevDataAsset : public UItemBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TraitPointsAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LvlUnblockTraitID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UReadableDataAsset*> ReadableAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactDBTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FactIntFactValue;
    
    UItemCharDevDataAsset();

};

