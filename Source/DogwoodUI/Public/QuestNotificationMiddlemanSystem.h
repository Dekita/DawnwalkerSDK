#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Objective.h"
#include "QuestNotificationMiddlemanSystem.generated.h"

class UQuest;

UCLASS(Blueprintable)
class DOGWOODUI_API UQuestNotificationMiddlemanSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UQuestNotificationMiddlemanSystem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnQuestUpdated(const UQuest* Quest, bool bSilent);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestObjectiveUpdated(const UQuest* Quest, const FObjective& Objective, bool bSilent);
    
    UFUNCTION(BlueprintCallable)
    void OnQuestAdded(const UQuest* Quest, bool bSilent);
    
};

