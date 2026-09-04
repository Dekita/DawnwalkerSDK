#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FocusableSoundClueInterface.generated.h"

UINTERFACE(Blueprintable)
class UFocusableSoundClueInterface : public UInterface {
    GENERATED_BODY()
};

class IFocusableSoundClueInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableVFX();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableVFX();
    
};

