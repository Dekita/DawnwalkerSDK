#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DawnwalkerWoundContainerProvider.generated.h"

class UWoundContainerComponent;

UINTERFACE(Blueprintable)
class UDawnwalkerWoundContainerProvider : public UInterface {
    GENERATED_BODY()
};

class IDawnwalkerWoundContainerProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UWoundContainerComponent* GetWoundContainerComponentInterface();
    
};

