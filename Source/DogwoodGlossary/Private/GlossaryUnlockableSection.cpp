#include "GlossaryUnlockableSection.h"

FGlossaryUnlockableSection::FGlossaryUnlockableSection() {
    this->bRequiresUnlocking = false;
    this->bRequiresInputType = false;
    this->RequiredInputType = ECommonInputType::MouseAndKeyboard;
}

