#include "CinematicNode_Choice.h"
#include "ECinematicNodeType.h"

UCinematicNode_Choice::UCinematicNode_Choice() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->Type = ECinematicNodeType::Choice;
    this->bIsFullscreenChoice = false;
    this->TimedChoiceEndTime = 0.00f;
    this->TimedChoiceDuration = 0.00f;
}

bool UCinematicNode_Choice::IsChoiceUsed(const FGuid& ChoiceGuid) const {
    return false;
}

float UCinematicNode_Choice::GetRemainingTimePercentage() {
    return 0.0f;
}

EChoiceAvailability UCinematicNode_Choice::GetAvailability(const FGuid& ChoiceGuid) const {
    return EChoiceAvailability::Unlocked;
}


