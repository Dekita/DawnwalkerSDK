#include "DawnwalkerWorldSettings.h"
#include "Templates/SubclassOf.h"

ADawnwalkerWorldSettings::ADawnwalkerWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OverrideQuestClass = NULL;
    this->CourtSketchClass = NULL;
    this->bOverrideWorldMapBounds = false;
}

void ADawnwalkerWorldSettings::SetQuestOverride(TSubclassOf<UQuestSketch> InOverride) {
}

void ADawnwalkerWorldSettings::SetQuest(TSubclassOf<UQuestSketch> NewQuest) {
}

bool ADawnwalkerWorldSettings::GetOverridenMapBounds(const UObject* InWorldContext, FVector2D& TopLeft, FVector2D& BottomRight) {
    return false;
}


