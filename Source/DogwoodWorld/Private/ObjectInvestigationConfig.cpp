#include "ObjectInvestigationConfig.h"

UObjectInvestigationConfig::UObjectInvestigationConfig() {
    this->PointChargeTime = 0.50f;
    this->InputMappingContext = NULL;
    this->CameraMoveAction = NULL;
    this->NavigateAction = NULL;
    this->InteractAction = NULL;
    this->ExitAction = NULL;
    this->InvestigationPointWidgetClass = NULL;
}


