#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "ESystemIndicatorFlag.h"
#include "UIManagerSubsystem.generated.h"

class UDWActivatableWidget;
class UDWLocalPlayer;
class UDialogueUIManager;
class UStringTable;
class UUIFrontend;

UCLASS(Blueprintable, Config=Game)
class DOGWOODUI_API UUIManagerSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSystemIndicatorsChangedDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> CompassDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueUIManager* DialogueUIManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UDWLocalPlayer> LocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUIFrontend* ActiveFrontendWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* DayPhasesStringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* GenericOptionsTable;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSystemIndicatorsChangedDelegate OnSystemIndicatorsChanged;
    
    UUIManagerSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowPopupWidgets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowGameplayWidgets() const;
    
    UFUNCTION(BlueprintCallable)
    void SetSystemIndicatorActive(ESystemIndicatorFlag Flag, bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetShowPopupWidgets(bool bInShow);
    
    UFUNCTION(BlueprintCallable)
    void SetShowGameplayWidgets(bool bInShow);
    
    UFUNCTION(BlueprintCallable)
    void RegisterActivePopup(UDWActivatableWidget* Popup);
    
    UFUNCTION(BlueprintCallable)
    void OnWindowFocusChanged(bool bFocusedNow);
    
    UFUNCTION(BlueprintCallable)
    void OnApplicationFocusChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSystemIndicatorActive(ESystemIndicatorFlag Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDWActivatableWidget* GetActivePopup(const TSoftClassPtr<UDWActivatableWidget>& PopupClass) const;
    
    UFUNCTION(BlueprintCallable)
    void DeactivateAllPopups();
    
    UFUNCTION(BlueprintCallable)
    bool CanShowPauseMenu();
    
};

