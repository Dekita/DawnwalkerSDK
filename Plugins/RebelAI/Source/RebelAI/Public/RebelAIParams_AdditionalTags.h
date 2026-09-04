#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIParams.h"
#include "RebelAIParams_AdditionalTags.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_AdditionalTags : public FRebelAIParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    FRebelAIParams_AdditionalTags();
};

