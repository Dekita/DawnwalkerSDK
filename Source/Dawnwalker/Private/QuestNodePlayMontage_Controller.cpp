#include "QuestNodePlayMontage_Controller.h"

UQuestNodePlayMontage_Controller::UQuestNodePlayMontage_Controller() {
    this->LoadedMontage = NULL;
    this->CharacterToKeepVisAnimTick = NULL;
}

void UQuestNodePlayMontage_Controller::OnMontageEnded(UAnimMontage* EndedMontage, bool bInterrupted) {
}

void UQuestNodePlayMontage_Controller::OnCharacterAnimInstanceAvailable(ADawnwalkerCommonCharacterBase* Character) {
}


