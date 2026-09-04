#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeResumeActivity.generated.h"

UCLASS(Blueprintable)
class UQuestNodeResumeActivity : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityName;
    
public:
    UQuestNodeResumeActivity();

};

