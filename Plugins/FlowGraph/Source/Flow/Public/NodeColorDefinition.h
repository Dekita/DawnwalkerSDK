#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NodeColorDefinition.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FNodeColorDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Regular;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Colorblind;
    
    FNodeColorDefinition();
};

