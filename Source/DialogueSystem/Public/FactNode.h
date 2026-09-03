#pragma once
#include "CoreMinimal.h"
#include "FlowNode.h"
#include "FactNode.generated.h"

UCLASS(Abstract, Blueprintable)
class DIALOGUESYSTEM_API UFactNode : public UFlowNode {
    GENERATED_BODY()
public:
    UFactNode();

};

