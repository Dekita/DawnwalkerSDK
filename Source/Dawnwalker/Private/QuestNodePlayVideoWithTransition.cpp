#include "QuestNodePlayVideoWithTransition.h"

UQuestNodePlayVideoWithTransition::UQuestNodePlayVideoWithTransition() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(4);
    this->MediaSource = NULL;
    this->Opacity = 1.00f;
    this->Stretch = EStretch::ScaleToFill;
    this->bUnskippable = true;
    this->StartTransition = EVideoPlaybackTransitionType::None;
    this->FadeInTime = 1.00f;
    this->EndTransition = EVideoPlaybackTransitionType::None;
    this->FadeOutTime = 1.00f;
}


