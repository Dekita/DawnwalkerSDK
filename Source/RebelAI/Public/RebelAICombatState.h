#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAICombatState.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAICombatState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CombatMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsHitByCurrentAttack;
    
    FRebelAICombatState();
};

