#include "RWAudioComponentSettingsPreset.h"

URWAudioComponentSettingsPreset::URWAudioComponentSettingsPreset() {
    this->bCanBeVirtualised = true;
    this->bRWObstructionEnabled = false;
    this->RWObstructionComplexity = EObstructionComplexity::SingleEmitterRay;
    this->RWObstructionRefreshInterval = 0.20f;
    this->DopplerScale = 0.00f;
    this->ReverbType = EReverbType::AcousticsReverb;
}


