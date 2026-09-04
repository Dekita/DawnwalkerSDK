#include "DogwoodNPCDefinition.h"

UDogwoodNPCDefinition::UDogwoodNPCDefinition() {
    this->CharacterAbilityConfig = NULL;
    this->bShowActorNameLabel = false;
    this->WeightLimit = 0.00f;
    this->LootTable = NULL;
    this->DefaultMovementProfile = NULL;
    this->DefaultAnimLayer = NULL;
    this->Sockets = NULL;
    this->OverriddenActionpointAcceptableRadius = -1.00f;
    this->CombatSoundParameters = NULL;
    this->EnemyConfig = NULL;
    this->NeutralBehaviorTree = NULL;
    this->OffenseBehaviorTree = NULL;
    this->bEnableReactionsVO = true;
    this->bRandomizedChatter = true;
    this->FaceDefaultAnimLayer = NULL;
    this->FaceAnimLayer = NULL;
    this->GameplayFaceAnimLayer = NULL;
    this->bOverrideControlRigAnimLayer = false;
    this->ControlRigAnimLayer = NULL;
}


