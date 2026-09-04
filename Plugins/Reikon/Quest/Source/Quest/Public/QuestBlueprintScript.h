#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EQBlueprintScriptState.h"
#include "QuestBlueprintScript.generated.h"

UCLASS(Blueprintable)
class QUEST_API UQuestBlueprintScript : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQBlueprintScriptState State;
    
public:
    UQuestBlueprintScript();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetState(const EQBlueprintScriptState InState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EQBlueprintScriptState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescription() const;
    
    UFUNCTION(BlueprintCallable)
    void EndScript(const EQBlueprintScriptState InState);
    
};

