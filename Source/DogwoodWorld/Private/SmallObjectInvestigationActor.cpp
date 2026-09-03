#include "SmallObjectInvestigationActor.h"
#include "Components/SpotLightComponent.h"
#include "SmallObjectInvestigationComponent.h"

ASmallObjectInvestigationActor::ASmallObjectInvestigationActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USmallObjectInvestigationComponent>(TEXT("InvestigationComponent"));
    this->InvestigationComponent = (USmallObjectInvestigationComponent*)RootComponent;
    this->LightComponent = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
    this->LightComponent->SetupAttachment(RootComponent);
}




