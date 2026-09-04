#pragma once
#include "CoreMinimal.h"
#include "PresentedStatValueType.h"
#include "BloodBarLengthValue.generated.h"

USTRUCT(BlueprintType)
struct FBloodBarLengthValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    DOGWOODSTATS_API FBloodBarLengthValue();
};

