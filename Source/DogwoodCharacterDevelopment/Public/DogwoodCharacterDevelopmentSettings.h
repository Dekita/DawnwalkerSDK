#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EDayPhase.h"
#include "ECharacterDevelopmentAbilityType.h"
#include "Templates/SubclassOf.h"
#include "TraitUnblockVideosSoftRefs.h"
#include "DogwoodCharacterDevelopmentSettings.generated.h"

class UDataTable;
class UFocusAbilityBase;
class UGameplayEffect;
class UTraitAsset;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODCHARACTERDEVELOPMENT_API UDogwoodCharacterDevelopmentSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFocusAbilityBase>> NetImGuiSwordAbilities;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFocusAbilityBase>> NetImGuiSpellAbilities;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFocusAbilityBase>> NetImGuiVampireAbilities;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFocusAbilityBase>> DebugAbilitiesToUnlock;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EDayPhase, int32> PhaseChangeReward;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> AbilitySkillsTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> ExperienceQuestRewardTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> LevelExperienceRequirementTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> VampireMutationLevelsTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> TraitLevelRequirementTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> CombatRewardsTable;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 LevelCap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterDevelopmentAbilityType, FTraitUnblockVideosSoftRefs> TraitUnblockVideos;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayVideosForPassiveAbilities;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTraitAsset> AntigravSlamTrait;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UltimateTier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> VampireMutationDisabledEffectClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> ShadowstepDisabledEffectClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> AntiGravDisabledEffectClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> ClawRideDisabledEffectClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> AllowHumanAbilitiesEffectClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> AllowVampireAbilitiesEffectClass;
    
public:
    UDogwoodCharacterDevelopmentSettings();

    UFUNCTION(BlueprintCallable)
    static void SetPlayerLevelOverride(int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPlayerLevelOverride();
    
};

