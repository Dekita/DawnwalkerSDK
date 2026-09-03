#include "DogwoodAIService_Guard.h"

FDogwoodAIService_Guard::FDogwoodAIService_Guard() {
    this->GuardChangeInterval = 0.00f;
    this->GuardChangeIntervalDeviation = 0.00f;
    this->PredictionTimeSinceLastAttack = 0.00f;
    this->bSelectSimplerPredictionAlgorithm = false;
    this->FocusAbilitiesSubsystem = NULL;
}

