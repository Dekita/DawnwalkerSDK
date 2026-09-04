#pragma once
#include "CoreMinimal.h"
#include "RebelGenericTreeIndex16.generated.h"

USTRUCT(BlueprintType)
struct REBELGENERICTREEMODULE_API FRebelGenericTreeIndex16 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Value;
    
public:
    FRebelGenericTreeIndex16();
};

