#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AdjustableLookAtTarget.h"
#include "AutoLookAtTargetKey.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FAutoLookAtTargetKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAdjustableLookAtTarget Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OwnerTag;
    
    FAutoLookAtTargetKey();
};
FORCEINLINE uint32 GetTypeHash(const FAutoLookAtTargetKey) { return 0; }

