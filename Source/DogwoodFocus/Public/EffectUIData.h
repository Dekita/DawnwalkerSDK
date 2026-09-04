#pragma once
#include "CoreMinimal.h"
#include "EffectUIData.generated.h"

USTRUCT(BlueprintType)
struct FEffectUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EffectDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoesEffectApply;
    
    DOGWOODFOCUS_API FEffectUIData();
};

