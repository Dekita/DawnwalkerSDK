#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeEndActivity.generated.h"

UCLASS(Blueprintable)
class UQuestNodeEndActivity : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityName;
    
public:
    UQuestNodeEndActivity();

};

