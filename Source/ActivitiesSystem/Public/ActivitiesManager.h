#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ActivitiesManager.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class ACTIVITIESSYSTEM_API UActivitiesManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UActivitiesManager();

    UFUNCTION(BlueprintCallable)
    void StartActivity(APlayerController* PlayerController, const FString& ActivityId);
    
    UFUNCTION(BlueprintCallable)
    void ResumeActivity(APlayerController* PlayerController, const FString& ActivityId);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllActiveActivities(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void EndActivity(APlayerController* PlayerController, const FString& ActivityId);
    
};

