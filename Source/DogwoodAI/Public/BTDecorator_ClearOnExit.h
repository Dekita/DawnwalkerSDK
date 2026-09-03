#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "BTDecorator_ClearOnExit.generated.h"

UCLASS(Blueprintable)
class DOGWOODAI_API UBTDecorator_ClearOnExit : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UBTDecorator_ClearOnExit();

};

