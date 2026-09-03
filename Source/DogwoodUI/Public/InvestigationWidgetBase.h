#pragma once
#include "CoreMinimal.h"
#include "DWActivatableWidget.h"
#include "InvestigationWidgetBase.generated.h"

class UCinematicDialogue;
class UDWButtonBase;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UInvestigationWidgetBase : public UDWActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDWButtonBase* SkipButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDWButtonBase* ExitButton;
    
public:
    UInvestigationWidgetBase();

protected:
    UFUNCTION(BlueprintCallable)
    void SkipCurrentDialogueLine();
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayDialoguePlaybackStarted(UCinematicDialogue* Dialogue);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayDialoguePlaybackFinished(UCinematicDialogue* Dialogue);
    
};

