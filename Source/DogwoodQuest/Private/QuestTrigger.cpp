#include "QuestTrigger.h"
#include "QuestComponent.h"
#include "QuestTriggerComponent.h"

AQuestTrigger::AQuestTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->QuestComponent = CreateDefaultSubobject<UQuestComponent>(TEXT("QuestComponent"));
    this->QuestTriggerComponent = CreateDefaultSubobject<UQuestTriggerComponent>(TEXT("QuestTriggerComponent"));
    this->CollisionComponent = NULL;
    this->NoticeCollisionComponent = NULL;
}


