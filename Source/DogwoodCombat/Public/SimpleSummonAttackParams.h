#pragma once
#include "CoreMinimal.h"
#include "SimpleSummonAttackParams.generated.h"

class AActor;
class UAnimMontage;

USTRUCT(BlueprintType)
struct FSimpleSummonAttackParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AttackMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* BlockReactionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* ParryReactionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    DOGWOODCOMBAT_API FSimpleSummonAttackParams();
};

