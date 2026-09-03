#pragma once
#include "CoreMinimal.h"
#include "RebelFormationGroup.h"
#include "DawnwalkerFormationGroup.generated.h"

class UCinematicDialogue;
class URebelAIStub;
class URebelFormationGroupDefinition;

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerFormationGroup : public URebelFormationGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelFormationGroupDefinition* TransportDefinition;
    
public:
    UDawnwalkerFormationGroup();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCinematicStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicFinished(UCinematicDialogue* Dialogue, const bool bKeepDialogueState);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDied(URebelAIStub* Victim, URebelAIStub* Killer);
    
};

