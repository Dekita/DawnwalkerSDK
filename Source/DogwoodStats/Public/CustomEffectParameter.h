#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CustomEffectParameter.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct DOGWOODSTATS_API FCustomEffectParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FCustomEffectParameter();
};

