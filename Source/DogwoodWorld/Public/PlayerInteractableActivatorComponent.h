#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "OnTargetedInteractableChangedDelegate.h"
#include "PlayerInteractableActivatorComponent.generated.h"

class AActor;
class UAbilitySystemComponent;
class UInteractableComponent;
class URebelSpatialLayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODWORLD_API UPlayerInteractableActivatorComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetedInteractableChanged OnTargetedInteractableChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* OwnerAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoredActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractableComponent* TargetedInteractable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelSpatialLayer* FocusDetectorsLayer;
    
public:
    UPlayerInteractableActivatorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartInteractionWithTarget();
    
    UFUNCTION(BlueprintCallable)
    void SetInFocusMode(bool State);
    
    UFUNCTION(BlueprintCallable)
    void OnIsInCombatTagChanged(FGameplayTag GameplayTag, int32 Number);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFastTravelStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnFastTravelled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInteractableComponent* GetTargetedInteractable() const;
    
    UFUNCTION(BlueprintCallable)
    void EndInteractionWithTarget();
    
};

