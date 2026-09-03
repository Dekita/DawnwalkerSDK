#pragma once
#include "CoreMinimal.h"
#include "EMappinState.h"
#include "Mappinable.h"
#include "TriggerMappinable.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODMAP_API ATriggerMappinable : public AMappinable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<float> CustomDetectionRadius;
    
public:
    ATriggerMappinable(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void TryToSetMappinState(EMappinState State);
    
};

