#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ECreatureCategoryType.h"
#include "GameplayTagContainer.h"
#include "PostDrinkBloodDialogueData.h"
#include "DrinkBloodSettings.generated.h"

class UBloodDrinkableAnims;
class UGameplayEffect;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DAWNWALKER_API UDrinkBloodSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldInputTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag KilledInnocentFactTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPostDrinkBloodDialogueData> PostBloodDrinkingCreatureDialogue;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECreatureCategoryType, TSoftClassPtr<UGameplayEffect>> PostBloodDrinkingEffects;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> BasePostAnimalDrinkingEffect;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBloodDrinkableAnims> DefaultDrinkableAnims;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UBloodDrinkableAnims>> IdentificationTagDrinkableAnims;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UBloodDrinkableAnims>> BodyTypesDrinkableAnims;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UBloodDrinkableAnims>> CreaturesDrinkableAnims;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> BloodReplenishEffectClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> BloodReplenishDurationEffectClass;
    
    UDrinkBloodSettings();

};

