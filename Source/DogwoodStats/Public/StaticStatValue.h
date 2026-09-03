#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "StaticStatValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSTATS_API FStaticStatValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FStaticStatValue();
};

