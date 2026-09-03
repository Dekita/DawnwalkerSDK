#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PlayerInputBlocker.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class DOGWOODSYSTEM_API UPlayerInputBlocker : public UInterface {
    GENERATED_BODY()
};

class DOGWOODSYSTEM_API IPlayerInputBlocker : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void RemovePawnInputBlocker(FName Blocker) PURE_VIRTUAL(RemovePawnInputBlocker,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddPawnInputBlocker(FName Blocker) PURE_VIRTUAL(AddPawnInputBlocker,);
    
};

