#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "DogwoodBalanceSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class DOGWOODSYSTEM_API UDogwoodBalanceSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LevelCap;
    
    UDogwoodBalanceSettings();

};

