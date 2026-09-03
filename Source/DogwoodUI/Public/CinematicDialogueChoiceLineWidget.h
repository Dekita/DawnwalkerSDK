#pragma once
#include "CoreMinimal.h"
#include "CinematicChoiceLine.h"
#include "ChoiceReplacementData.h"
#include "DWButtonBase.h"
#include "CinematicDialogueChoiceLineWidget.generated.h"

class UCinematicNode_Choice;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCinematicDialogueChoiceLineWidget : public UDWButtonBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutBeforeUrgeAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ForceSelectUrgeAnim;
    
public:
    UCinematicDialogueChoiceLineWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupChoice(UCinematicNode_Choice* ChoiceNode, const FCinematicChoiceLine& InLine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RestoreChoice(const FChoiceReplacementData& InData, const FCinematicChoiceLine& OriginalLine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReplaceChoice(const FChoiceReplacementData& InData, const FCinematicChoiceLine& ReplacingLine);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeChoice();
    
};

