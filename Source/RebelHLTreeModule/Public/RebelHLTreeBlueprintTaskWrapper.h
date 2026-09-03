#pragma once
#include "CoreMinimal.h"
#include "RebelHLTreeTaskBase.h"
#include "Templates/SubclassOf.h"
#include "RebelHLTreeBlueprintTaskWrapper.generated.h"

class URebelHLTreeTaskBlueprintBase;

USTRUCT(BlueprintType)
struct REBELHLTREEMODULE_API FRebelHLTreeBlueprintTaskWrapper : public FRebelHLTreeTaskBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelHLTreeTaskBlueprintBase> TaskClass;
    
    FRebelHLTreeBlueprintTaskWrapper();
};

