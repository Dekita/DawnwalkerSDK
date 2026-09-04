#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelHLTreeConditionCommonBase.h"
#include "RebelHLTreeGameplayTagContainerMatchCondition.generated.h"

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeGameplayTagContainerMatchCondition : public FRebelHLTreeConditionCommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayContainerMatchType MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExactMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FRebelHLTreeGameplayTagContainerMatchCondition();
};

