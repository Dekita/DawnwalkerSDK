#include "CinematicNode.h"

UCinematicNode::UCinematicNode() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->Type = ECinematicNodeType::Response;
    this->LocalizationTextType = ELocalizationTextType::TranslationOnly;
    this->bAllowOverridingCinematicDesigners = true;
    this->bHasCustomLightsSetup = false;
    this->bHasCustomAudioSetup = false;
    this->LoadedSequence = NULL;
    this->SequencePlayer = NULL;
}


