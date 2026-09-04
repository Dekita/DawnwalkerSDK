#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeUnlockAchievement.generated.h"

UCLASS(Blueprintable)
class UQuestNodeUnlockAchievement : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
public:
    UQuestNodeUnlockAchievement();

};

