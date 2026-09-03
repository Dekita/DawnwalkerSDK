#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "ActiveAbilityWorldTargetChangedDelegate.h"
#include "ActiveAbilitiesWorldSubsystem.generated.h"

class AActor;
class APawn;
class UAbilitySystemComponent;
class UDogwoodFocusConfig;
class URebelSpatialLayer;
class UWorldActivationAbilitySlot;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UActiveAbilitiesWorldSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDogwoodFocusConfig* ActiveAbilitiesConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldActivationAbilitySlot* Slot1Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorldActivationAbilitySlot* Slot2Ability;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveAbilityWorldTargetChanged ActiveAbilityWorldTargetStateChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> CurrentAbilityTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilitySystemComponent> PlayerAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelSpatialLayer* StubLayer;
    
    UActiveAbilitiesWorldSubsystem();

    UFUNCTION(BlueprintCallable)
    void RefreshAvailableAbilities(bool bTargetChanged);
    
    UFUNCTION(BlueprintCallable)
    void OnIsInteractableLockedTagChanged(FGameplayTag GameplayTag, int32 Number);
    
    UFUNCTION(BlueprintCallable)
    void OnIsInFocusModeTagChanged(FGameplayTag GameplayTag, int32 Number);
    
    UFUNCTION(BlueprintCallable)
    bool IsTargetValid();
    
    UFUNCTION(BlueprintCallable)
    FVector GetTargetPromptLocation();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsPlayerInAbilityFromWorldActivationMode();
    
};

