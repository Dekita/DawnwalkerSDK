#pragma once
#include "CoreMinimal.h"
#include "RebelGenericTreeIndex8.generated.h"

USTRUCT(BlueprintType)
struct REBELGENERICTREEMODULE_API FRebelGenericTreeIndex8 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Value;
    
public:
    FRebelGenericTreeIndex8();
};

