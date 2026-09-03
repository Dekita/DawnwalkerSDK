#pragma once
#include "CoreMinimal.h"
#include "ItemBaseDataAsset.h"
#include "ItemReadableDataAsset.generated.h"

class UReadableDataAsset;

UCLASS(Blueprintable)
class DOGWOODINVENTORY_API UItemReadableDataAsset : public UItemBaseDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReadableDataAsset* ReadableAsset;
    
    UItemReadableDataAsset();

};

