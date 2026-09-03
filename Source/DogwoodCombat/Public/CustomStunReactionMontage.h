#pragma once
#include "CoreMinimal.h"
#include "CustomStunReactionMontage.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FCustomStunReactionMontage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StunLoopMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* StunEndMontage;
    
    FCustomStunReactionMontage();
};
FORCEINLINE uint32 GetTypeHash(const FCustomStunReactionMontage) { return 0; }

