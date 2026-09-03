#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDawnwalkerTraversalStateVariable.h"
#include "DawnwalkerTraversalStateCondition.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerTraversalStateCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDawnwalkerTraversalStateVariable StateVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange ValueRange;
    
    FDawnwalkerTraversalStateCondition();
};

