#pragma once
#include "CoreMinimal.h"
#include "QuestBlockSystemInterface.h"
#include "QuestBlockSystemImpl.generated.h"

class AActor;
class UCinematicDialogue;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestBlockSystemImpl : public UQuestBlockSystemInterface {
    GENERATED_BODY()
public:
    UQuestBlockSystemImpl();

private:
    UFUNCTION(BlueprintCallable)
    void OnPlayerResurrected();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDied();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueFinished(UCinematicDialogue* Dialogue, const bool bKeepDialogueState);
    
    UFUNCTION(BlueprintCallable)
    void OnBloodDrinkingStopped(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void OnBloodDrinkingStarted(AActor* InActor);
    
};

