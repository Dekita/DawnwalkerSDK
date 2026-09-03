#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_IsAPReady.generated.h"

UCLASS(Blueprintable)
class POPULATION_API UBTDecorator_IsAPReady : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UBTDecorator_IsAPReady();

};

