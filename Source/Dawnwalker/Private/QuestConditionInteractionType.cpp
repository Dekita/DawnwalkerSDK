#include "QuestConditionInteractionType.h"

UQuestConditionInteractionType::UQuestConditionInteractionType() {
    this->bHasTimeCost = false;
    this->bHasTimeCostOriginalValue = false;
    this->TimeCost = ETimeCostType::None;
    this->bDisplayDelayLaterIcon = true;
    this->bPushTimeToSpecificHour = false;
    this->InteractionTimeProgressionType = EQuestTimeProgressionType::None;
    this->TimeProgressionTargetHour = 8;
    this->bRequireFocusBeforeFirstInteraction = false;
    this->bHighlightAsImportant = true;
    this->bStopWhenActorDies = true;
    this->bResetQuestInteractionCounter = true;
}

void UQuestConditionInteractionType::OnInteractionStarted() const {
}


