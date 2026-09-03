#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ERebelSKURegion.h"
#include "DogwoodCombatSettings.generated.h"

class UCombatConfig;
class UDifficultyConfig;
class UDogwoodCombatSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODCOMBAT_API UDogwoodCombatSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCombatConfig> Config;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDifficultyConfig> DifficultyConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERebelSKURegion> SKURegionsWithNoCombatBlood;
    
    UDogwoodCombatSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDogwoodCombatSettings* GetDogwoodCombatSettings();
    
};

