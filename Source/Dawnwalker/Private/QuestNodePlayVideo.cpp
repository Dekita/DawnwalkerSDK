#include "QuestNodePlayVideo.h"

UQuestNodePlayVideo::UQuestNodePlayVideo() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->MediaSource = NULL;
    this->Opacity = 1.00f;
    this->Stretch = EStretch::ScaleToFill;
}


