#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceActor.h"
#include "DialogueLevelSequenceActor.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API ADialogueLevelSequenceActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    ADialogueLevelSequenceActor(const FObjectInitializer& ObjectInitializer);

};

