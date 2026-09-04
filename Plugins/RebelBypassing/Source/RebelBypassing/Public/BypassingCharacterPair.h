#pragma once
#include "CoreMinimal.h"
#include "BypassingCharacterPair.generated.h"

class URebelBypassingCharacter;

USTRUCT(BlueprintType)
struct REBELBYPASSING_API FBypassingCharacterPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelBypassingCharacter* First;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelBypassingCharacter* Second;
    
    FBypassingCharacterPair();
};

