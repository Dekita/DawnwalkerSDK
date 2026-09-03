#include "DialogueCameraActor.h"
#include "DialogueCameraComponent.h"

ADialogueCameraActor::ADialogueCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UDialogueCameraComponent>(TEXT("CameraComponent"))) {
    FProperty* p_CameraComponent_Prior = GetClass()->FindPropertyByName("CameraComponent");
    this->DialogueCameraComponent = (UDialogueCameraComponent*)*p_CameraComponent_Prior->ContainerPtrToValuePtr<UDialogueCameraComponent*>(this);
    const FProperty* p_CameraComponent = GetClass()->FindPropertyByName("CameraComponent");
    (*p_CameraComponent->ContainerPtrToValuePtr<UCameraComponent*>(this))->SetupAttachment(RootComponent);
    this->DialogueCameraComponent->SetupAttachment(RootComponent);
}


