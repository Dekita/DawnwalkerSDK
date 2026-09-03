#include "QuestVolume.h"
#include "QuestComponent.h"
#include "QuestTriggerComponent.h"

AQuestVolume::AQuestVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->QuestComponent = CreateDefaultSubobject<UQuestComponent>(TEXT("QuestComponent"));
    this->QuestTriggerComponent = CreateDefaultSubobject<UQuestTriggerComponent>(TEXT("QuestTriggerComponent"));
}


