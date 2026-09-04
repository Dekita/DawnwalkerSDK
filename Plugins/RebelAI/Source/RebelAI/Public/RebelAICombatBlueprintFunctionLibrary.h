#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "RebelAICombatBlueprintFunctionLibrary.generated.h"

class URebelAIStub;

UCLASS(Blueprintable)
class REBELAI_API URebelAICombatBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelAICombatBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopCombatBehaviors(URebelAIStub* AIStub, bool bShouldSwitchToIdlePhase, bool bShouldRestorePreCombatAttitudeToInstigator);
    
    UFUNCTION(BlueprintCallable)
    static bool StartCombatBehaviors(URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable)
    static void SetCombatInstigator(URebelAIStub* AIStub, URebelAIStub* Instigator);
    
    UFUNCTION(BlueprintCallable)
    static void BP_SetPreferredOrbitAngle(const URebelAIStub* AIStub, const float NewAngle);
    
    UFUNCTION(BlueprintCallable)
    static void BP_SetPreferredLocation(const URebelAIStub* AIStub, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static void BP_SetDestinationLocationOnOrbit(const URebelAIStub* AIStub, const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    static void BP_SetBlockingDirection(const URebelAIStub* AIStub, const FGameplayTag& Direction);
    
    UFUNCTION(BlueprintCallable)
    static void BP_ReadyForFinisher(const URebelAIStub* AIStub, bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BP_IsWeaponEquipped(const URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BP_IsValueInFloatRange(float Value, const FFloatRange& Range);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool BP_IsAttackSelected(const URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable)
    static void BP_EnableGuardAnimation(const URebelAIStub* AIStub, bool bEnable);
    
};

