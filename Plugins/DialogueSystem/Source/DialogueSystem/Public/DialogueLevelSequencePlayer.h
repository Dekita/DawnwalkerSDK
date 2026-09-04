#pragma once
#include "CoreMinimal.h"
#include "LevelSequencePlayer.h"
#include "MovieSceneSequencePlaybackSettings.h"
#include "DialogueLevelSequencePlayer.generated.h"

class ALevelSequenceActor;
class UCinematicDialogue;
class UDialogueLevelSequencePlayer;
class ULevelSequence;

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UDialogueLevelSequencePlayer : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
    UDialogueLevelSequencePlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDialogueLevelSequencePlayer* CreateDialogueLevelSequencePlayer(UCinematicDialogue* Dialogue, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor);
    
};

