#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TorchUser.generated.h"

UINTERFACE(Blueprintable)
class UTorchUser : public UInterface {
    GENERATED_BODY()
};

class ITorchUser : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyTorchToggled();
    
};

