#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelHLTreeGameplayTagContainerMatchConditionInstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeGameplayTagContainerMatchConditionInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OtherContainer;
    
    FRebelHLTreeGameplayTagContainerMatchConditionInstanceData();
};

