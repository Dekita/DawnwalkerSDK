#pragma once
#include "CoreMinimal.h"
#include "DialogueLevelSequencePlayer.h"
#include "CinematicNodeLevelSequencePlayer.generated.h"

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UCinematicNodeLevelSequencePlayer : public UDialogueLevelSequencePlayer {
    GENERATED_BODY()
public:
    UCinematicNodeLevelSequencePlayer(const FObjectInitializer& ObjectInitializer);

};

