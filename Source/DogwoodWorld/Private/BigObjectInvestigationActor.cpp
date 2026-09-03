#include "BigObjectInvestigationActor.h"
#include "BigObjectInvestigationComponent.h"

ABigObjectInvestigationActor::ABigObjectInvestigationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBigObjectInvestigationComponent>(TEXT("InvestigationComponent"));
    this->InvestigationComponent = (UBigObjectInvestigationComponent*)RootComponent;
}


