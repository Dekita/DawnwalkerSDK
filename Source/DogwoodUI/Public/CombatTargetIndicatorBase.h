#pragma once
#include "CoreMinimal.h"
#include "AttackData.h"
#include "ERebelIndicatorIconType.h"
#include "Blueprint/UserWidget.h"
#include "CombatTargetIndicatorBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCombatTargetIndicatorBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAtMinimumScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackData> AttackQueue;
    
public:
    UCombatTargetIndicatorBase();

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateIconTypeToMatchObservedStubState();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleShowOnlyMiddleIndicator();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWeakspotExploited();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObservedStubIconTypeChanged(ERebelIndicatorIconType IconType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMinimumScaleChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyIndicatorCleared();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetShowsOnlyMiddleIndicator();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableHardLock(bool bEnable);
    
};

