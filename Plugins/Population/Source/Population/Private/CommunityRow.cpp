#include "CommunityRow.h"

FCommunityRow::FCommunityRow() {
    this->AIDefinition = NULL;
    this->AIReactions = NULL;
    this->NPCRole = ENPCRole::Filler_NoSave;
    this->SpawnPriority = ESpawnPriority::AlwaysSpawned;
    this->SpawnPlace = ECommunityObjectType::Invalid;
    this->SpawnStyle = ESpawnStyle::Hidden;
    this->RespawnPolicy = ERespawnPolicy::DoNotRespawn;
    this->bIgnoreGuardAreas = false;
}

