#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeConditionBase.h"
#include "Templates/SubclassOf.h"
#include "RebelHLTreeBlueprintConditionWrapper.generated.h"

class URebelHLTreeConditionBlueprintBase;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeBlueprintConditionWrapper : public FRebelHLTreeConditionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelHLTreeConditionBlueprintBase> ConditionClass;
    
    FRebelHLTreeBlueprintConditionWrapper();
};

