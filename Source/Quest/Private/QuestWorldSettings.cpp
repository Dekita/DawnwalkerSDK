#include "QuestWorldSettings.h"

AQuestWorldSettings::AQuestWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Quest = NULL;
    this->bAllowRunningQuestSketchOverride = true;
}


