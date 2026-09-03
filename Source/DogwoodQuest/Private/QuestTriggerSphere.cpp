#include "QuestTriggerSphere.h"
#include "Components/SphereComponent.h"

AQuestTriggerSphere::AQuestTriggerSphere(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComp"));
    const FProperty* p_CollisionComponent = GetClass()->FindPropertyByName("CollisionComponent");
    (*p_CollisionComponent->ContainerPtrToValuePtr<UShapeComponent*>(this)) = (UShapeComponent*)RootComponent;
    const FProperty* p_NoticeCollisionComponent = GetClass()->FindPropertyByName("NoticeCollisionComponent");
    (*p_NoticeCollisionComponent->ContainerPtrToValuePtr<UShapeComponent*>(this)) = CreateDefaultSubobject<USphereComponent>(TEXT("NoticeCollisionComp"));
    (*p_NoticeCollisionComponent->ContainerPtrToValuePtr<UShapeComponent*>(this))->SetupAttachment(RootComponent);
}


