#pragma once
#include "CoreMinimal.h"
#include "BodyGroom.generated.h"

class UGroomAsset;
class UGroomBindingAsset;

USTRUCT(BlueprintType)
struct FBodyGroom {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGroomAsset> Groom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGroomBindingAsset> Binding;
    
    DOGWOODINVENTORY_API FBodyGroom();
};

