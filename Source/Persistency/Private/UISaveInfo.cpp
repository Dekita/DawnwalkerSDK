#include "UISaveInfo.h"

FUISaveInfo::FUISaveInfo() {
    this->bHasMetadata = false;
    this->bHasValidDate = false;
    this->Day = 0;
    this->SaveType = ESaveType::Manual;
    this->PlayTime = 0;
    this->WasSavingLocked = 0;
    this->GameVersion = 0;
    this->SaveVersion = 0;
}

