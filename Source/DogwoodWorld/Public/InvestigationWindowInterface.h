#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InvestigationWindowInterface.generated.h"

class UInvestigationComponent;

UINTERFACE(Blueprintable)
class DOGWOODWORLD_API UInvestigationWindowInterface : public UInterface {
    GENERATED_BODY()
};

class IInvestigationWindowInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetInvestigationComponent(UInvestigationComponent* InComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyCancellableStateChanged();
    
};

