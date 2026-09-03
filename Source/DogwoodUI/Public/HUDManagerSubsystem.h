#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ETimeDisplayOption.h"
#include "HUDPresetHandle.h"
#include "OnFocusAbilitiesAvailableChangedDelegate.h"
#include "OnTimeDisplayOptionChangedDelegate.h"
#include "HUDManagerSubsystem.generated.h"

class AActor;
class UHUDVisibilityPreset;
class UNamedToggleableContainer;
class UWidget;

UCLASS(Blueprintable)
class DOGWOODUI_API UHUDManagerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeDisplayOptionChanged OnTimeDisplayOptionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusAbilitiesAvailableChanged OnFocusAbilitiesAvailableChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeDisplayOption TimeSystemDisplayOption;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* HUDWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FName, UNamedToggleableContainer*> NamedHUDElements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerHiddenHud;
    
public:
    UHUDManagerSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetTimeDisplayOption(ETimeDisplayOption InNewDisplayOption);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDVisible(bool bHudVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetAreFocusAbilitiesAvailable(bool bInAvailable);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHUDWidget(UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void RegisterHUDElement(UNamedToggleableContainer* Element);
    
    UFUNCTION(BlueprintCallable)
    FHUDPresetHandle PushHUDPreset(UHUDVisibilityPreset* InPreset);
    
    UFUNCTION(BlueprintCallable)
    bool PopHUDPreset(const FHUDPresetHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHUDVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETimeDisplayOption GetTimeDisplayOption() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAreFocusAbilitiesAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetActiveGameHUDWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDisplayFocusAbilityHpBar(AActor* BarOwner) const;
    
};

