#include "EventLevelSequenceActor.h"
#include "EventLevelSequencePlayer.h"

AEventLevelSequenceActor::AEventLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UEventLevelSequencePlayer>(TEXT("AnimationPlayer"))) {
}


