#include "QuestNodeSetFactionRelationship.h"

UQuestNodeSetFactionRelationship::UQuestNodeSetFactionRelationship() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->AttitudeToSet = ERebelAIAttitude::NotSet;
}


