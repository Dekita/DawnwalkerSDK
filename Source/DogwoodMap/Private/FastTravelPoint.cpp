#include "FastTravelPoint.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"

AFastTravelPoint::AFastTravelPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RegularStateSphereDetector = CreateDefaultSubobject<USphereComponent>(TEXT("RegularStateSphereDetector"));
    this->InteractionViewCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("InteractionViewCamera"));
    this->InteractionViewCamera->SetupAttachment(RootComponent);
    this->RegularStateSphereDetector->SetupAttachment(RootComponent);
}


