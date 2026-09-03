#pragma once
#include "CoreMinimal.h"
#include "CompoundStatOperation.h"
#include "PresentedStatValueType.h"
#include "CompoundStatValue.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSTATS_API FCompoundStatValue : public FPresentedStatValueType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompoundStatOperation> Operations;
    
    FCompoundStatValue();
};

