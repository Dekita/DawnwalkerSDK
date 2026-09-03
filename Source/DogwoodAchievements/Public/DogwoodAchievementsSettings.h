#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EEquipmentSlotType.h"
#include "GameplayTagContainer.h"
#include "DogwoodAchievementsSettings.generated.h"

class UDataTable;
class UItemBaseDataAsset;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODACHIEVEMENTS_API UDogwoodAchievementsSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> AchievementsConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UItemBaseDataAsset>> SelfishItems;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SelfishMerchantTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UItemBaseDataAsset> ArbitersBladeItem;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UItemBaseDataAsset>, FGameplayTag> ArbitersRegaliaMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ValleyTrotterObjectiveTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> BigCityLivingObjectiveTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> DeliveryDelayObjectiveTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EEquipmentSlotType> GoldenEquipmentSlots;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InvalidAchievementId;
    
    UDogwoodAchievementsSettings();

};

