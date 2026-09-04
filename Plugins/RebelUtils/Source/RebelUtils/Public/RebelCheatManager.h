#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "RebelCheatManager.generated.h"

UCLASS(Blueprintable)
class REBELUTILS_API URebelCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    URebelCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void RefreshSubscriptionState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListSubscribedDLC();
    
    UFUNCTION(BlueprintCallable, Exec)
    void IsSubscribedFreeWeekend();
    
    UFUNCTION(BlueprintCallable, Exec)
    void IsSubscribedDLC(const FString& InDlcTitleId);
    
};

