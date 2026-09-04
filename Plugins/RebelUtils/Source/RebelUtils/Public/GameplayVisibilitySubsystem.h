#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayVisibilitySubsystem.generated.h"

UCLASS(Blueprintable)
class REBELUTILS_API UGameplayVisibilitySubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGameplayVisibilitySubsystem();

};

