#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFadeState.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "SaveGameInterface.h"
#include "ChapelState.h"
#include "EChapelDialogueResult.h"
#include "ChapelSystem.generated.h"

class AActor;
class UDWActivatableWidget;
class UHUDVisibilityPreset;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UChapelSystem : public UWorldSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChapelWidgetShown);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChapelFadeOut);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChapelPanelActiveDelegateBP, const FGameplayTag&, ChapelPanelTag, bool, bActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChapelDialogueDelegateBP, EChapelDialogueResult, Result);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChapelWidgetShown OnChapelWidgetShownDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChapelWidgetShown OnChapelFadeOutDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChapelDialogueDelegateBP OnChapelDialogueResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ChapelActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDWActivatableWidget* ActiveShrineWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHUDVisibilityPreset* ChapelHudPreset;
    
public:
    UChapelSystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasChapelInteracted(const FGuid& ID) const;
    
    UFUNCTION(BlueprintCallable)
    void TriggerChapelDialogue(const FChapelState& InState, AActor* NewChapelActor);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUiShown(EFadeState PreviousFadeState, EFadeState NextFadeState);
    
    UFUNCTION(BlueprintCallable)
    void OnShowUiFadeStateChanged(EFadeState PreviousFadeState, EFadeState NextFadeState);
    
    UFUNCTION(BlueprintCallable)
    void OnHideUiFadeStateChanged(EFadeState PreviousFadeState, EFadeState NextFadeState);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyPanelActiveChanged(const FGameplayTag& ChapelPanelTag, const bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUIShown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPanelActive(const FGameplayTag& ChapelPanelTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChoiceEnabled(EChapelDialogueResult Choice) const;
    
    UFUNCTION(BlueprintCallable)
    void HandleChapelChoice(EChapelDialogueResult Choice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FChapelState GetChapelStateByObjectPath(const FString& InObjectPathName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FChapelState GetChapelStateByID(const FGuid& ID) const;
    

    // Fix for true pure virtual functions not being implemented
};

