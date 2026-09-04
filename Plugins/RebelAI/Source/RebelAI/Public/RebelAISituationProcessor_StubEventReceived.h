#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIEvent.h"
#include "RebelAISituationProcessor.h"
#include "RebelAISituationProcessor_StubEventReceived.generated.h"

class UCinematicDialogue;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELAI_API URebelAISituationProcessor_StubEventReceived : public URebelAISituationProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPostboneInCutscenes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelAIEvent> PostponedEvents;
    
public:
    URebelAISituationProcessor_StubEventReceived();

private:
    UFUNCTION(BlueprintCallable)
    void OnCutsceneStart();
    
    UFUNCTION(BlueprintCallable)
    void OnCutsceneEnd(UCinematicDialogue* Dialogue, const bool bKeepDialogueState);
    
};

