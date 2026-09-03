#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "DogwoodAICombatBlueprintFunctionLibrary.generated.h"

class UDataTable;
class UObject;
class URebelAIStub;

UCLASS(Blueprintable)
class DOGWOODAI_API UDogwoodAICombatBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDogwoodAICombatBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag Temp_BP_GetCombatPose(const URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetRandomAttackDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URebelAIStub* GetNextIncomingAttacker(URebelAIStub* AIStub, bool& bIsHitIncoming, float& TimeToHitWindow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetMirrorAttackDirection(const FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float GetBlendTimesBasedOnTags(TSoftObjectPtr<UDataTable> CustomBlendTimes, FGameplayTag ActionTag, FGameplayTag InterrruptedActionTag, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ForceGuardSuccess(URebelAIStub* AIStub);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeGuardDirection(URebelAIStub* AIStub, const FGameplayTag& DirectionTag);
    
};

