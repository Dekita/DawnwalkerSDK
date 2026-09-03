#include "RebelCrowdSubsystem.h"
#include "DawnwalkerCrowdController.h"

URebelCrowdSubsystem::URebelCrowdSubsystem() {
    this->CrowdControllerClass = UDawnwalkerCrowdController::StaticClass();
    this->CrowdController = NULL;
}


