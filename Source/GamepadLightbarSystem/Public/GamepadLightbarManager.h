#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GamepadLightbarManager.generated.h"

UCLASS(Blueprintable)
class GAMEPADLIGHTBARSYSTEM_API UGamepadLightbarManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UGamepadLightbarManager();

    UFUNCTION(BlueprintCallable)
    void DeactivatePreset(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void ActivatePreset(const FString& Name);
    
};

