#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EdictTriggerReceiver.generated.h"

UINTERFACE(Blueprintable)
class DOGWOODQUEST_API UEdictTriggerReceiver : public UInterface {
    GENERATED_BODY()
};

class IEdictTriggerReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEdictTriggered(int32 InEdictIndex);
    
};

