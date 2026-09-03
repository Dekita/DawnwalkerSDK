#include "TutorialSchema.h"

UTutorialSchema::UTutorialSchema() {
    this->CurrentWorld = NULL;
}

void UTutorialSchema::ShowTutorial_Implementation(const int64 RequestID) {
}

bool UTutorialSchema::IsImmediate_Implementation() const {
    return false;
}


