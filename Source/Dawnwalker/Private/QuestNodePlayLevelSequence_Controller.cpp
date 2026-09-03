#include "QuestNodePlayLevelSequence_Controller.h"

UQuestNodePlayLevelSequence_Controller::UQuestNodePlayLevelSequence_Controller() {
    this->LoadedSequence = NULL;
    this->SequencePlayer = NULL;
    this->GeneratedCommunity = NULL;
    this->CommunityActivator = NULL;
    this->StoredLevelSequenceActor = NULL;
    this->SpawnPoint = NULL;
}

void UQuestNodePlayLevelSequence_Controller::PerformFadeOutOnEnd() const {
}

void UQuestNodePlayLevelSequence_Controller::OnSequenceStop() {
}

void UQuestNodePlayLevelSequence_Controller::OnCameraFadeStateChange(EFadeState PreviousFadeState, EFadeState NextFadeState) {
}


