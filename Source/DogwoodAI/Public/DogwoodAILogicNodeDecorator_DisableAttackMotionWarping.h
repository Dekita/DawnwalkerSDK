#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNodeDecorator.h"
#include "DogwoodAILogicNodeDecorator_DisableAttackMotionWarping.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODAI_API FDogwoodAILogicNodeDecorator_DisableAttackMotionWarping : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    FDogwoodAILogicNodeDecorator_DisableAttackMotionWarping();
};

