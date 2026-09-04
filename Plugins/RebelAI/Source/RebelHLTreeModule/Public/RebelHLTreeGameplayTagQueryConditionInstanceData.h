#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelHLTreeGameplayTagQueryConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeGameplayTagQueryConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
    FRebelHLTreeGameplayTagQueryConditionInstanceData();
};

