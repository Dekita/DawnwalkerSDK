#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeEnableQuestStartMappin.generated.h"

class UQuest;

UCLASS(Blueprintable)
class UQuestNodeEnableQuestStartMappin : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuest* Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable;
    
public:
    UQuestNodeEnableQuestStartMappin();

};

