#include "QuestNodeVfxManager_Controller.h"

UQuestNodeVfxManager_Controller::UQuestNodeVfxManager_Controller() {
    this->VfxTemplate = NULL;
    this->ParameterMesh = NULL;
    this->ParameterDataInterface = NULL;
}

void UQuestNodeVfxManager_Controller::OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent) {
}


