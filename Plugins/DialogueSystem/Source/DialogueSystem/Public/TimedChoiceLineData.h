#pragma once
#include "CoreMinimal.h"
#include "TimedChoiceLineData.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FTimedChoiceLineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTimedChoiceDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHidden;
    
    FTimedChoiceLineData();
};

