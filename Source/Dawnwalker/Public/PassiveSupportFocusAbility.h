#pragma once
#include "CoreMinimal.h"
#include "CustomEnemiesEffects.h"
#include "EFocusAbilityType.h"
#include "FocusAbilityInterface.h"
#include "PassiveGameplayAbility.h"
#include "Templates/SubclassOf.h"
#include "PassiveSupportFocusAbility.generated.h"

class UFocusAbilityBase;
class UObject;

UCLASS(Blueprintable)
class DAWNWALKER_API UPassiveSupportFocusAbility : public UPassiveGameplayAbility, public IFocusAbilityInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFocusAbilityType AbilityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFocusAbilityBase> SourceActiveAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomEnemiesEffects> CustomEnemiesEffects;
    
    UPassiveSupportFocusAbility();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFocusAbilityType GetFocusAbilityType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, float> GetCustomPropertiesOfSupportAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TMap<FString, float> GetCustomPropertiesOfAbility(const UObject* WorldObject, TSubclassOf<UFocusAbilityBase> SourceAbility);
    

    // Fix for true pure virtual functions not being implemented
};

