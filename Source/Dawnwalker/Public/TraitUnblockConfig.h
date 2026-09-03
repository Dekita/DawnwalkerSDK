#pragma once
#include "CoreMinimal.h"
#include "ETraitUnblockType.h"
#include "TraitUnblockConfig.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FTraitUnblockConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraitUnblockType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FTraitUnblockConfig();
};

