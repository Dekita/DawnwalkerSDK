#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "BloodBarLengthValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSTATS_API FBloodBarLengthValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    FBloodBarLengthValue();
};

