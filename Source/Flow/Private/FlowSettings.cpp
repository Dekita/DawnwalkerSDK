#include "FlowSettings.h"

UFlowSettings::UFlowSettings() {
    this->bCreateFlowSubsystemOnClients = true;
    this->bWarnAboutMissingIdentityTags = true;
    this->bLogOnSignalDisabled = true;
    this->bLogOnSignalPassthrough = true;
    this->bUseAdaptiveNodeTitles = false;
}


