#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CinematicChoiceLine.h"
#include "DialogueUIManager.generated.h"

class UCinematicDialogue;
class UCinematicDialogueWidget;
class UCinematicSubsystem;

UCLASS(Blueprintable)
class DOGWOODUI_API UDialogueUIManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDialogueChoiceHovered, const FCinematicChoiceLine&, InLine);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueChoiceHovered OnDialogueChoiceHovered;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCinematicDialogueWidget* ActiveDialogueWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicSubsystem* BoundSystem;
    
public:
    UDialogueUIManager();

    UFUNCTION(BlueprintCallable)
    void OnDialoguePlaybackStarted(UCinematicDialogue* Dialogue, bool bWasStateKept);
    
    UFUNCTION(BlueprintCallable)
    void OnDialoguePlaybackFinished();
    
};

