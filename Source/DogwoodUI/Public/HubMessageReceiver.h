#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HubMessageReceiver.generated.h"

class UHubMessage;

UINTERFACE(Blueprintable)
class UHubMessageReceiver : public UInterface {
    GENERATED_BODY()
};

class IHubMessageReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveMessage(UHubMessage* InMessage);
    
};

