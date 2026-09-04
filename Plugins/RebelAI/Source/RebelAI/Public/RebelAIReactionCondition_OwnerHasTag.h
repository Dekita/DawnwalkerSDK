#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_OwnerHasTag.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_OwnerHasTag : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    FRebelAIReactionCondition_OwnerHasTag();
};

