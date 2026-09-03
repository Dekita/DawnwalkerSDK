#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "AchievementSystemSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Platforms)
class ACHIEVEMENTSYSTEM_API UAchievementSystemSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InvalidAchievementId;
    
    UAchievementSystemSettings();

};

