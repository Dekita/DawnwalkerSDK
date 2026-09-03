#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EHealthType.h"
#include "CreatureInterface.generated.h"

UINTERFACE(Blueprintable)
class DOGWOODSYSTEM_API UCreatureInterface : public UInterface {
    GENERATED_BODY()
};

class DOGWOODSYSTEM_API ICreatureInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EHealthType GetHealthType();
    
};

