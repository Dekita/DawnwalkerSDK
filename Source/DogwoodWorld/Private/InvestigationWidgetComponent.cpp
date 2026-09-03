#include "InvestigationWidgetComponent.h"

UInvestigationWidgetComponent::UInvestigationWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ParentInvestigationComponent = NULL;
    this->PointIndex = 0;
    this->SpawnedInvestigationWidget = NULL;
}


