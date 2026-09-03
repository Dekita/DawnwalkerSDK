#include "FlowWorldSettings.h"
#include "FlowComponent.h"

AFlowWorldSettings::AFlowWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlowComponent = CreateDefaultSubobject<UFlowComponent>(TEXT("FlowComponent"));
}


