#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDawnwalkerTraversalStateVariable.h"
#include "DawnwalkerTraversalStateCondition.generated.h"

USTRUCT(BlueprintType)
struct FDawnwalkerTraversalStateCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDawnwalkerTraversalStateVariable StateVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange ValueRange;
    
    DAWNWALKER_API FDawnwalkerTraversalStateCondition();
};

