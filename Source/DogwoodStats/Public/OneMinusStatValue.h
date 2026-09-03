#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "PresentedStatValueType.h"
#include "OneMinusStatValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSTATS_API FOneMinusStatValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Stat;
    
    FOneMinusStatValue();
};

