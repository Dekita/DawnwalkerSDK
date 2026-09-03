#include "QuestNodeSetReactionFilterForNPCs.h"

UQuestNodeSetReactionFilterForNPCs::UQuestNodeSetReactionFilterForNPCs() {
    this->Inputs.AddDefaulted(2);
    this->Outputs.AddDefaulted(3);
    this->FilterMode = ERebelAISituationsFilterMode::Default;
}


