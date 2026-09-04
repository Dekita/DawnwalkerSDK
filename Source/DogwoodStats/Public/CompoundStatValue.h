#pragma once
#include "CoreMinimal.h"
#include "CompoundStatOperation.h"
#include "PresentedStatValueType.h"
#include "CompoundStatValue.generated.h"

USTRUCT(BlueprintType)
struct FCompoundStatValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompoundStatOperation> Operations;
    
    DOGWOODSTATS_API FCompoundStatValue();
};

