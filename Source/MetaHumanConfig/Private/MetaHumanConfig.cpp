#include "MetaHumanConfig.h"

UMetaHumanConfig::UMetaHumanConfig() {
    this->Type = EMetaHumanConfigType::Unspecified;
    this->InternalVersion = 1;
}

bool UMetaHumanConfig::ReadFromDirectory(const FString& InPath) {
    return false;
}


