#include "QuestNodeLockPlayerOnSelectedTarget.h"

UQuestNodeLockPlayerOnSelectedTarget::UQuestNodeLockPlayerOnSelectedTarget() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bHardLock = false;
    this->LockOnThisNPC = NULL;
}


