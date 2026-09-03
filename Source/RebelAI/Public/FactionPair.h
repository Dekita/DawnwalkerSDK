#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactionPair.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FFactionPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactionA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FactionB;
    
    FFactionPair();
};
FORCEINLINE uint32 GetTypeHash(const FFactionPair) { return 0; }

