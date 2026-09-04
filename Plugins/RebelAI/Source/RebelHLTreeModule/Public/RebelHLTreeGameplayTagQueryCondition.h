#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelHLTreeConditionCommonBase.h"
#include "RebelHLTreeGameplayTagQueryCondition.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeGameplayTagQueryCondition : public FRebelHLTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FRebelHLTreeGameplayTagQueryCondition();
};

