#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CinematicSyncSubsystem.generated.h"

class UCinematicDialogue;

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UCinematicSyncSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UCinematicSyncSubsystem();

    UFUNCTION(BlueprintCallable)
    void OnPlaybackStarted(UCinematicDialogue* Dialogue);
    
    UFUNCTION(BlueprintCallable)
    void OnDialoguePlaybackFinished();
    
};

