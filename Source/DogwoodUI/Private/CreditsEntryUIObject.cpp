#include "CreditsEntryUIObject.h"

UCreditsEntryUIObject::UCreditsEntryUIObject() {
    this->CreditsData = NULL;
}

FCreditsEntry UCreditsEntryUIObject::GetEntry() const {
    return FCreditsEntry{};
}

UCreditsData* UCreditsEntryUIObject::GetCreditsData() const {
    return NULL;
}


