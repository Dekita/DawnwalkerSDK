#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DawnwalkerBuffContainerProvider.generated.h"

class UBuffContainerComponent;

UINTERFACE(Blueprintable)
class DAWNWALKER_API UDawnwalkerBuffContainerProvider : public UInterface {
    GENERATED_BODY()
};

class IDawnwalkerBuffContainerProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UBuffContainerComponent* GetBuffContainerComponentInterface();
    
};

