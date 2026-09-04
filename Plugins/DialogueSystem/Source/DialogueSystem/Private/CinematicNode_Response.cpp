#include "CinematicNode_Response.h"
#include "ELocalizationTextType.h"

UCinematicNode_Response::UCinematicNode_Response() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->LocalizationTextType = ELocalizationTextType::VoiceOver;
}

void UCinematicNode_Response::OnVoicePlaybackStarted(const FGuid& LineGuid) {
}

void UCinematicNode_Response::OnVoicePlaybackFinished(const FGuid& LineGuid) {
}

void UCinematicNode_Response::OnResponsePlayerFinished() {
}


