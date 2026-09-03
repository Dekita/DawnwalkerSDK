#pragma once
#include "CoreMinimal.h"
#include "GameplayAbility.h"
#include "RuneDispelAbility.generated.h"

class ARuneActor;

UCLASS(Abstract, Blueprintable)
class DOGWOODWORLD_API URuneDispelAbility : public UGameplayAbility {
    GENERATED_BODY()
public:
    URuneDispelAbility();

    UFUNCTION(BlueprintCallable)
    void DispelTargetRune(ARuneActor* Rune);
    
};

