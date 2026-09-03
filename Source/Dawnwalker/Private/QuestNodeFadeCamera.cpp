#include "QuestNodeFadeCamera.h"

UQuestNodeFadeCamera::UQuestNodeFadeCamera() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(2);
    this->FadeDirection = ECameraFadeDirection::Show;
    this->duration = 1.00f;
    this->bShouldFadeAudio = false;
}


