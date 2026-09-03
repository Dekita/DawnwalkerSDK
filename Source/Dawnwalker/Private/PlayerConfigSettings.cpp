#include "PlayerConfigSettings.h"

UPlayerConfigSettings::UPlayerConfigSettings() {
    this->TransitionWarpTargetName = TEXT("TransitionTarget");
    this->TransitionEndNotifyName = TEXT("TransitionEnd");
    this->BloodFatigueEffect = NULL;
    this->CancelAbilitiesOnBloodFatigue = false;
    this->CombatIndicatorNearDistance = 300.00f;
    this->CombatIndicatorFarDistance = 1000.00f;
    this->CombatIndicatorNearScale = 1.00f;
    this->CombatIndicatorFarScale = 0.75f;
}


