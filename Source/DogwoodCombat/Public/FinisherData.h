#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FinisherData.generated.h"

class UAnimMontage;
class UGameplayEffect;

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FFinisherData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* InstigatorMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TargetMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffectForInstigator;
    
    FFinisherData();
};

