#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DWActivatableWidget.h"
#include "EDialogueLineDisplayPosition.h"
#include "GameplayDialogueWidget.generated.h"

class ACinematicCharacter;
class UCinematicDialogue;
class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UGameplayDialogueWidget : public UDWActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<UCinematicDialogue*, UUserWidget*> OverheadSubtitleByDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UUserWidget*, float> AdditionalOffsets;
    
public:
    UGameplayDialogueWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowOverheadSubtitle(const ACinematicCharacter* Character, const UCinematicDialogue* Dialogue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EDialogueLineDisplayPosition GetDialogueLineDisplayPositionForSpeaker(FGameplayTag SpeakerTag, const UCinematicDialogue* Dialogue);
    
    UFUNCTION(BlueprintCallable)
    void CalculateAdditionalSubtitleOffsets();
    
};

