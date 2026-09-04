#pragma once
#include "CoreMinimal.h"
#include "Engine/Blueprint.h"
#include "FlowNodeBlueprint.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowNodeBlueprint : public UBlueprint {
    GENERATED_BODY()
public:
    UFlowNodeBlueprint();

};

