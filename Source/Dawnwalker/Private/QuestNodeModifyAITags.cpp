#include "QuestNodeModifyAITags.h"

UQuestNodeModifyAITags::UQuestNodeModifyAITags() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->Operation = EModifyAITagsOperation::Add;
}


