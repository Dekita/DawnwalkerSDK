#include "DialogueLevelSequenceActor.h"
#include "DialogueLevelSequencePlayer.h"

ADialogueLevelSequenceActor::ADialogueLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UDialogueLevelSequencePlayer>(TEXT("AnimationPlayer"))) {
}


