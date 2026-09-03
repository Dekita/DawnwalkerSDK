#include "QuestNodeSetReactionProfileForNPCs.h"

UQuestNodeSetReactionProfileForNPCs::UQuestNodeSetReactionProfileForNPCs() {
    this->Inputs.AddDefaulted(2);
    this->Outputs.AddDefaulted(3);
    this->ReactionProfile = NULL;
}


