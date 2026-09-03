#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "NecrospeakConfig.generated.h"

class UItemCatalystDataAsset;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UNecrospeakConfig : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UItemCatalystDataAsset*> CatalystItems;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NecrospeakID;
    
    UNecrospeakConfig();

};

