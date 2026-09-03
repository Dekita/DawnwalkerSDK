#pragma once
#include "CoreMinimal.h"
#include "LevelSequencePlayer.h"
#include "EventLevelSequencePlayer.generated.h"

UCLASS(Blueprintable)
class NODERUNTIME_API UEventLevelSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
    UEventLevelSequencePlayer(const FObjectInitializer& ObjectInitializer);

};

