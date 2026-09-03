#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EVampireHunger.h"
#include "EVampireHungerCondition.h"
#include "OnActiveHungerEffectsOverrideChangedDelegate.h"
#include "OnIsPlayerVampireChangedDelegate.h"
#include "OnVampireHungerLevelChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "VampireHungerRow.h"
#include "VampireHungerSubsystem.generated.h"

class UDataTable;
class UGameplayAbility;
class UVampireHungerEffectDataAsset;

UCLASS(Blueprintable)
class DOGWOODVAMPIREHUNGER_API UVampireHungerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIsPlayerVampireChanged OnIsPlayerVampireChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVampireHungerLevelChanged OnVampireHungerLevelChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveHungerEffectsOverrideChanged OnActiveHungerEffectsOverrideChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVampireHunger, FVampireHungerRow> HungerLevelEntryMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerVampire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVampireHunger VampireHungerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideHungerEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVampireHunger HungerEffectsOverrideLerpA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVampireHunger HungerEffectsOverrideLerpB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HungerEffectsOverrideLerpValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedVampireHungerTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> LoadedVampireHungerAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UVampireHungerEffectDataAsset* LoadedVampireHungerEffectData;
    
public:
    UVampireHungerSubsystem();

    UFUNCTION(BlueprintCallable, Exec)
    void OverrideHungerEffects(const float InLerpAlpha, const EVampireHunger InHungerEffectA, const EVampireHunger InHungerEffectB);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBloodValueChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVampireHungerRow GetVampireHungerRow(const EVampireHunger InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EVampireHunger GetVampireHungerLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVampireHungerEffectDataAsset* GetVampireHungerEffectData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVampireHungerRow GetCurrentVampireHungerRow() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearHungerEffectsOverride();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckVampireHungerThreshold(const EVampireHunger RequiredHunger, const EVampireHungerCondition Condition) const;
    
};

