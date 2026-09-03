#pragma once
#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ActionPrompt.h"
#include "EDwCrosshairTextStyle.h"
#include "DawnwalkerHUDBase.generated.h"

class UEventLevelSequencePlayer;
class UInventoryComponent;

UCLASS(Blueprintable, NonTransient)
class DAWNWALKER_API ADawnwalkerHUDBase : public AHUD {
    GENERATED_BODY()
public:
    ADawnwalkerHUDBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInputPromptEnabled(bool bEnabled, const FActionPrompt& Action, const FText& PromptText, const FActionPrompt& SecondAction, const FText& SecondPromptText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCrosshairTextEnabled(bool bEnabled, const FText& Text, EDwCrosshairTextStyle Style);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuestSequenceStopped(UEventLevelSequencePlayer* SequencePlayer, bool bInCinematicMode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQuestSequencePlayed(UEventLevelSequencePlayer* SequencePlayer, bool bInCinematicMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyShopLeft(UInventoryComponent* MerchantInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LaunchShop(UInventoryComponent* MerchantInvntory);
    
};

