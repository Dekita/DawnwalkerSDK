#include "CreaturesSubsystem.h"

UCreaturesSubsystem::UCreaturesSubsystem() {
    this->LoadedCreaturesTable = NULL;
    this->LoadedCreaturesEscapeChancePresetsTable = NULL;
}

FCreatureEntry UCreaturesSubsystem::GetCreatureEntryFromActor(const AActor* InActor, bool& bOutResult) const {
    return FCreatureEntry{};
}


