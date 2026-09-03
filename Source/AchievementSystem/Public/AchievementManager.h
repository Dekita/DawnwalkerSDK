#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AchievementManager.generated.h"

UCLASS(Blueprintable)
class ACHIEVEMENTSYSTEM_API UAchievementManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UAchievementManager();

    UFUNCTION(BlueprintCallable)
    void UnlockAchievementByString(const FString& AchievementName, float Progress);
    
    UFUNCTION(BlueprintCallable)
    void UnlockAchievementByName(FName AchievementName, float Progress);
    
};

