#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActiveAbilityTag.generated.h"

USTRUCT(BlueprintType)
struct FActiveAbilityTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActiveAbilityTag;
    
    DOGWOODFOCUS_API FActiveAbilityTag();
};
FORCEINLINE uint32 GetTypeHash(const FActiveAbilityTag) { return 0; }

