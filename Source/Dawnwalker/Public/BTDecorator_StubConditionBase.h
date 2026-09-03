#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_StubConditionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UBTDecorator_StubConditionBase : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObservationInterval;
    
public:
    UBTDecorator_StubConditionBase();

};

