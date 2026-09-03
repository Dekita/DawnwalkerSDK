#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayEffectQuery.h"
#include "GameplayTagContainer.h"
#include "SaveGameInterface.h"
#include "DogwoodAbilitySubsystem.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class DOGWOODABILITYSYSTEM_API UDogwoodAbilitySubsystem : public UGameInstanceSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UGameplayEffect*> LoadedEffects;
    
public:
    UDogwoodAbilitySubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ProlongActiveEffects(const FGameplayEffectQuery& Query, float ProlongValue, bool bPercent, bool bSetCurrentTimeAsStartTime, const FGameplayTag GameplayCueTag) const;
    

    // Fix for true pure virtual functions not being implemented
};

