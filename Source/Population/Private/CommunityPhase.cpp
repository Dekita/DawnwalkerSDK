#include "CommunityPhase.h"

FCommunityPhase::FCommunityPhase() {
    this->bChangeGuardArea = false;
    this->CommunityBehavior = ECommunityBehavior::Default;
    this->CommunityObjectSelectionPolicy = ECommunityObjectSelectionPolicy::Default;
    this->CommunityObjectType = ECommunityObjectType::Invalid;
    this->ActionPointChangeFrequency = EActionPointChangeFrequency::Never;
    this->Quantity = 0;
    this->CrowdDefaultDayQuantityMin = 0;
    this->CrowdDefaultDayQuantityMax = 0;
    this->CrowdDefaultNightQuantityMin = 0;
    this->CrowdDefaultNightQuantityMax = 0;
    this->RainCurve = NULL;
}

