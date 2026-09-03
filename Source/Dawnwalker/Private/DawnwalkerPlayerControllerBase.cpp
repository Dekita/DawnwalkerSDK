#include "DawnwalkerPlayerControllerBase.h"
#include "RebelPlayerCameraManager.h"

ADawnwalkerPlayerControllerBase::ADawnwalkerPlayerControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = ARebelPlayerCameraManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->OnlyMovementInputComponent = NULL;
    this->BlankInputComponent = NULL;
    this->CachedGameplayTasksComponent = NULL;
    this->PossessedCharacter = NULL;
    this->GameInputBlockers = 0;
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
}

void ADawnwalkerPlayerControllerBase::SetGameInputBlockerActive(EGameInputBlocker Blocker, bool bActive) {
}

void ADawnwalkerPlayerControllerBase::RemovePawnInputBlocker(FName Blocker) {
}

bool ADawnwalkerPlayerControllerBase::IsAnyGameInputBlockerActive() const {
    return false;
}

void ADawnwalkerPlayerControllerBase::AddPawnInputBlocker(FName Blocker) {
}


