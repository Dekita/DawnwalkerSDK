#pragma once
#include "CoreMinimal.h"
#include "QuestNodeWaitingBase_TEMP.h"
#include "QuestWaitableInterface.h"
#include "QuestNodeWaitingBase.generated.h"

UCLASS(Abstract, Blueprintable)
class QUEST_API UQuestNodeWaitingBase : public UQuestNodeWaitingBase_TEMP, public IQuestWaitableInterface {
    GENERATED_BODY()
public:
    UQuestNodeWaitingBase();


    // Fix for true pure virtual functions not being implemented
};

