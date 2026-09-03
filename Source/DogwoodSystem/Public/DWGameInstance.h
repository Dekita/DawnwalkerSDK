#pragma once
#include "CoreMinimal.h"
#include "RebelGameInstance.h"
#include "DWGameInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DOGWOODSYSTEM_API UDWGameInstance : public URebelGameInstance {
    GENERATED_BODY()
public:
    UDWGameInstance();

    UFUNCTION(BlueprintCallable)
    void NotifyReachedMainMenuAfterLaunch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeforeFirstMainMenu() const;
    
};

