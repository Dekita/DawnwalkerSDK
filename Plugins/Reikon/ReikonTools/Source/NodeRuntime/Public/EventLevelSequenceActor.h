#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "EventLevelSequenceActor.generated.h"

UCLASS(Blueprintable)
class NODERUNTIME_API AEventLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    AEventLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

};

