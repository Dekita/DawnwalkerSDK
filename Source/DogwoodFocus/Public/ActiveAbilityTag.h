#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ActiveAbilityTag.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FActiveAbilityTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActiveAbilityTag;
    
    FActiveAbilityTag();
};
FORCEINLINE uint32 GetTypeHash(const FActiveAbilityTag) { return 0; }

