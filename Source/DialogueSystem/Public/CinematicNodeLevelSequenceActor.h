#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "CinematicNodeLevelSequenceActor.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API ACinematicNodeLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    ACinematicNodeLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

};

