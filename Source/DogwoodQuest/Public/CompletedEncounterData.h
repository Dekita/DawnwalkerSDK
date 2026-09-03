#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CompletedEncounterData.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODQUEST_API FCompletedEncounterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EncounterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CompletionCount;
    
    FCompletedEncounterData();
};

