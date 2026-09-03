#include "QuestTriggerBox.h"
#include "Components/BoxComponent.h"

AQuestTriggerBox::AQuestTriggerBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionComp"));
    const FProperty* p_CollisionComponent = GetClass()->FindPropertyByName("CollisionComponent");
    (*p_CollisionComponent->ContainerPtrToValuePtr<UShapeComponent*>(this)) = (UShapeComponent*)RootComponent;
    const FProperty* p_NoticeCollisionComponent = GetClass()->FindPropertyByName("NoticeCollisionComponent");
    (*p_NoticeCollisionComponent->ContainerPtrToValuePtr<UShapeComponent*>(this)) = CreateDefaultSubobject<UBoxComponent>(TEXT("NoticeCollisionComp"));
    (*p_NoticeCollisionComponent->ContainerPtrToValuePtr<UShapeComponent*>(this))->SetupAttachment(RootComponent);
}


