#include "QuestNodeNPCBase.h"
#include "CommunityStubReferenceType.h"

UQuestNodeNPCBase::UQuestNodeNPCBase() {
    this->NPCReference = CreateDefaultSubobject<UCommunityStubReferenceType>(TEXT("NPCRef"));
}


