#include "CinematicNodeLevelSequenceActor.h"
#include "CinematicNodeLevelSequencePlayer.h"

ACinematicNodeLevelSequenceActor::ACinematicNodeLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCinematicNodeLevelSequencePlayer>(TEXT("AnimationPlayer"))) {
}


