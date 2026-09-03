#include "RebelAIDef.h"

URebelAIDef::URebelAIDef() {
    this->AIBoardClass = NULL;
    this->AIStubEquipmentProxyClass = NULL;
    this->PerceptionProfile = NULL;
    this->ServiceTree = NULL;
    this->LogicTreeGeneric = NULL;
    this->AssetTreeGeneric = NULL;
    this->Config = NULL;
    this->bUseTicketBoard = false;
    this->bUseTicketUser = false;
}

URebelAIConfig* URebelAIDef::GetAIConfig() const {
    return NULL;
}


