#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeStartActivity.generated.h"

UCLASS(Blueprintable)
class UQuestNodeStartActivity : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActivityName;
    
public:
    UQuestNodeStartActivity();

};

