#pragma once
#include "CoreMinimal.h"
#include "AnimMontageSet.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct DOGWOODCOMBAT_API FAnimMontageSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> AnimMontages;
    
    FAnimMontageSet();
};

