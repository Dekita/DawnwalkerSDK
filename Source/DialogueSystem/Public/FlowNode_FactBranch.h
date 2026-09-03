#pragma once
#include "CoreMinimal.h"
#include "FlowNode_FactTest.h"
#include "FlowNode_FactBranch.generated.h"

UCLASS(Abstract, Blueprintable)
class DIALOGUESYSTEM_API UFlowNode_FactBranch : public UFlowNode_FactTest {
    GENERATED_BODY()
public:
    UFlowNode_FactBranch();

};

