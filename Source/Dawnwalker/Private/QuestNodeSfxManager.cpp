#include "QuestNodeSfxManager.h"

UQuestNodeSfxManager::UQuestNodeSfxManager() {
    this->Inputs.AddDefaulted(2);
    this->Outputs.AddDefaulted(2);
    this->bStopWhenAttachedToDestroyed = true;
    this->StopInterval = 0.00f;
    this->StopCurveInterpolation = EAkCurveInterpolation::Linear;
}


