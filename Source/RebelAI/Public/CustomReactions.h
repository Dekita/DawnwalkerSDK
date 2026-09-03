#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIHandledSituations.h"
#include "CustomReactions.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FCustomReactions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelAIHandledSituations> Reactions;
    
    FCustomReactions();
};

