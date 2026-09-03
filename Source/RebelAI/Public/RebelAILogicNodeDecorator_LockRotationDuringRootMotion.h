#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_LockRotationDuringRootMotion.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_LockRotationDuringRootMotion : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    FRebelAILogicNodeDecorator_LockRotationDuringRootMotion();
};

