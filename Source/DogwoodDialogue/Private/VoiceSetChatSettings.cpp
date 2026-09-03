#include "VoiceSetChatSettings.h"

UVoiceSetChatSettings::UVoiceSetChatSettings() {
    this->MaxChatTriggerRadius = 3000.00f;
    this->MaxNPCChatDistance = 400.00f;
    this->MaxPercentageOfNPCsChatting = 0.00f;
    this->PreResponsePause = 0.50f;
    this->MinPlayerProximity = 1800.00f;
    this->MinChatProximity = 1000.00f;
    this->VoiceTagCooldown = 140.00f;
    this->VoiceSetChatTickRate = 3.00f;
}


