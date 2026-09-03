#include "QuestNodeCinematicDialogue.h"

UQuestNodeCinematicDialogue::UQuestNodeCinematicDialogue() {
    this->Outputs.AddDefaulted(1);
    this->bSkipDistanceCheck = false;
    this->bKeepStreamingSource = false;
    this->bPerformDistanceCheck = false;
    this->bCanPlayDuringCombat = false;
    this->bPauseDialogueDuringCombat_Gameplay = false;
    this->bPauseDialogueDuringCombat_CinematicGameplay = true;
    this->bWaitForPhaseTransition = true;
    this->bDeactivateAutoActivatedCommunitiesAfterDialogue = true;
    this->bPauseDialogueWhenOutOfRange = false;
    this->bOverridePauseDistance = false;
    this->PauseDistanceOverride = 1000.00f;
    this->DialogueAsset = NULL;
    this->DialogueInstance = NULL;
    this->CachedPlaybackMode = ECachedDialoguePlaybackMode::Unknown;
}

void UQuestNodeCinematicDialogue::OnCombatStarted() {
}


