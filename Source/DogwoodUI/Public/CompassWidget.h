#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMappinState.h"
#include "EMappinType.h"
#include "WidgetMappinStub.h"
#include "ERebelSetting.h"
#include "ERebelSettingChangeMode.h"
#include "Blueprint/UserWidget.h"
#include "ECompassMode.h"
#include "Templates/SubclassOf.h"
#include "CompassWidget.generated.h"

class UCanvasPanel;
class UCompassHeadingWidget;
class UCompassPinWidget;
class UQuest;
class URebelAIStub;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCompassWidget : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCompassModeUpdatedDelegate, ECompassMode, CurrentMode);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* PinContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* SpatialPinContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCompassHeadingWidget> HeadingWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCompassPinWidget> MapPinWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClampedMappinPositionPercentage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCompassModeUpdatedDelegate OnCompassModeChanged;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int64, FWidgetMappinStub> PinStubs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCompassHeadingWidget*> SpawnedHeadingWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCompassPinWidget*> PinWidgetPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URebelAIStub*> PreCombatGuards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URebelAIStub*> PreCombatAggresiveGuards;
    
public:
    UCompassWidget();

protected:
    UFUNCTION()
    void UpdatePinState(int64 ID, EMappinType InType, EMappinState InState);
    
    UFUNCTION()
    void UpdatePinPosition(int64 ID, const FVector& position);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdateCompassMode();
    
protected:
    UFUNCTION()
    void RemoveSpatialPin(int64 ID);
    
    UFUNCTION()
    void RemovePin(int64 ID);
    
private:
    UFUNCTION(BlueprintCallable)
    void PreCombatSignalAggressive(bool bState, const URebelAIStub* Guard);
    
    UFUNCTION(BlueprintCallable)
    void PreCombatSignal(const URebelAIStub* Guard);
    
    UFUNCTION(BlueprintCallable)
    void PreCombatEnded(const URebelAIStub* Guard);
    
    UFUNCTION(BlueprintCallable)
    void OnSettingChanged(ERebelSetting InSetting, float InVal, ERebelSettingChangeMode InSettingChangeMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnQuestTracked(const UQuest* Quest, const FGuid& Objective, bool bSilent);
    
    UFUNCTION()
    void OnPinAreaLeft(int64 ID);
    
    UFUNCTION()
    void OnPinAreaEntered(int64 ID);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCombatStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnAttackerUnregistered(const URebelAIStub* Attacker, const URebelAIStub* Defender);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerYaw() const;
    
    UFUNCTION(BlueprintCallable)
    ECompassMode GetCurrentCompassMode();
    
    UFUNCTION(BlueprintCallable)
    void EnableSpatialMappins();
    
    UFUNCTION(BlueprintCallable)
    void DisableSpatialMappins();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float DirectionVectorToCompassYaw(const FVector& InVector);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCompassModeUpdated(ECompassMode Mode);
    
    UFUNCTION()
    void AddSpatialPin(int64 InID, EMappinType InType, EMappinState InState, bool bInEnabled, const FVector& InLocation);
    
    UFUNCTION()
    void AddPin(int64 InID, EMappinType InType, EMappinState InState, bool bInEnabled, const FVector& InPinLocation);
    
};

