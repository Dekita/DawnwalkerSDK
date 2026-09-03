#include "VideoPlaybackOptions.h"

FVideoPlaybackOptions::FVideoPlaybackOptions() {
    this->MediaSource = NULL;
    this->Opacity = 0.00f;
    this->Stretch = EStretch::None;
    this->bUnskippable = false;
}

