#pragma once
#include "CoreMinimal.h"
#include "AdditionalEffectModifiersUIInfo.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FAdditionalEffectModifiersUIInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomEffectValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EffectAppliesDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EffectNotAppliesDescription;
    
    FAdditionalEffectModifiersUIInfo();
};

