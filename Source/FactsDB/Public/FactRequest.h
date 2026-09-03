#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FactRequest.generated.h"

USTRUCT(BlueprintType)
struct FACTSDB_API FFactRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    FFactRequest();
};

