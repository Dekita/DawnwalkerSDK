#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "BloodBarVampireHungerSegments.h"
#include "DogwoodVampireHungerSettings.generated.h"

class UDataTable;
class UDogwoodVampireHungerSettings;
class UGameplayAbility;
class UVampireHungerEffectDataAsset;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODVAMPIREHUNGER_API UDogwoodVampireHungerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> VampireHungerDefinitions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayAbility> VampireHungerAbility;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVampireHungerEffectDataAsset> VampireHungerEffectData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBloodBarVampireHungerSegments> HungerPerBloodSegments;
    
    UDogwoodVampireHungerSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDogwoodVampireHungerSettings* Get();
    
};

