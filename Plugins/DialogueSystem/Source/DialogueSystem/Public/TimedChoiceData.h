#pragma once
#include "CoreMinimal.h"
#include "TimedChoiceData.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FTimedChoiceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTimedChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationOverride;
    
    FTimedChoiceData();
};

