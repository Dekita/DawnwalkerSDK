#pragma once
#include "CoreMinimal.h"
#include "EInspectableTriggerSource.h"
#include "InspectableBase.h"
#include "InspectableObject.generated.h"

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API AInspectableObject : public AInspectableBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInspectableTriggerSource TriggerSource;
    
    AInspectableObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInspectionStartedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInspectionEndedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInspectionCompletedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInspectionCancelledEvent();
    
};

