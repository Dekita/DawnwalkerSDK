#pragma once
#include "CoreMinimal.h"
#include "BypassingCharacterPair.h"
#include "BypassingPairBuffer.generated.h"

USTRUCT(BlueprintType)
struct REBELBYPASSING_API FBypassingPairBuffer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBypassingCharacterPair> Pairs;
    
    FBypassingPairBuffer();
};

