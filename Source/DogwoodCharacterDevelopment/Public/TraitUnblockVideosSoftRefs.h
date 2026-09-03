#pragma once
#include "CoreMinimal.h"
#include "TraitUnblockVideosSoftRefs.generated.h"

class UMediaSource;

USTRUCT(BlueprintType)
struct DOGWOODCHARACTERDEVELOPMENT_API FTraitUnblockVideosSoftRefs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMediaSource>> Videos;
    
    FTraitUnblockVideosSoftRefs();
};

