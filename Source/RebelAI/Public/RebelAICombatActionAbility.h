#pragma once
#include "CoreMinimal.h"
#include "RebelAIGameplayAbility.h"
#include "RebelAICombatActionAbility.generated.h"

UCLASS(Abstract, Blueprintable)
class REBELAI_API URebelAICombatActionAbility : public URebelAIGameplayAbility {
    GENERATED_BODY()
public:
    URebelAICombatActionAbility();

};

