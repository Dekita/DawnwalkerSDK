#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnteredCombatDelegateDelegate.h"
#include "LeftCombatDelegateDelegate.h"
#include "DebugCombatStarter.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API ADebugCombatStarter : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnteredCombatDelegate OnEnteredCombat;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLeftCombatDelegate OnLeftCombat;
    
    ADebugCombatStarter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LeaveCombat(bool bWon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnterCombat();
    
};

