#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ESendEventDecoratorMode.h"
#include "Templates/SubclassOf.h"
#include "BTDecorator_SendEvent.generated.h"

class UBaseEvent;

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API UBTDecorator_SendEvent : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBaseEvent> EventClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseEvent* Event;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESendEventDecoratorMode Mode;
    
    UBTDecorator_SendEvent();

};

