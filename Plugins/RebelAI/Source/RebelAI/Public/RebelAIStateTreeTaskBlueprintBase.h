#pragma once
#include "CoreMinimal.h"
#include "Blueprint/StateTreeTaskBlueprintBase.h"
#include "RebelAIStateTreeTaskBlueprintBase.generated.h"

UCLASS(Abstract, Blueprintable)
class URebelAIStateTreeTaskBlueprintBase : public UStateTreeTaskBlueprintBase {
    GENERATED_BODY()
public:
    URebelAIStateTreeTaskBlueprintBase(const FObjectInitializer& ObjectInitializer);

};

