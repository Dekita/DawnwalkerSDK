#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SpecialAttackHUDWidget.generated.h"

class ACharacter;
class UAbilitySystemComponent;
class UCombatComponentBase;
class UInventoryComponent;
class UItemBaseDataAsset;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API USpecialAttackHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACharacter> Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilitySystemComponent> OwnerASC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInventoryComponent> OwnerInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCombatComponentBase> OwnerCombatComponent;
    
public:
    USpecialAttackHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDisplayedItem(const UItemBaseDataAsset* ItemAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupCooldownEffect(float CooldownTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCooldownFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCombatEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CooldownUpdate(float TimeRemaining);
    
};

