#pragma once
#include "CoreMinimal.h"
#include "Blueprint/StateTreeConditionBlueprintBase.h"
#include "RebelAIStateTreeConditionBlueprintBase.generated.h"

UCLASS(Blueprintable)
class REBELAI_API URebelAIStateTreeConditionBlueprintBase : public UStateTreeConditionBlueprintBase {
    GENERATED_BODY()
public:
    URebelAIStateTreeConditionBlueprintBase(const FObjectInitializer& ObjectInitializer);

};

