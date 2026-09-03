#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnAnyEventReceivedDelegateDelegate.h"
#include "EventBusComponent.generated.h"

class UBaseEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODSYSTEM_API UEventBusComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnyEventReceivedDelegate OnAnyEventReceived;
    
    UEventBusComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SendEvent(UBaseEvent* Event);
    
};

