#pragma once
#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "TimedEffect.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODSTATS_API UTimedEffect : public UGameplayEffect {
    GENERATED_BODY()
public:
    UTimedEffect();

};

