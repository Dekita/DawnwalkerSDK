#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ButtonHoldInterface.h"
#include "WorldActivationAbilitySlot.generated.h"

class UFocusAbilityBase;
class UInputAction;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UWorldActivationAbilitySlot : public UObject, public IButtonHoldInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFocusAbilityBase* SlotAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* AbilityInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsHoldToActivate;
    
    UWorldActivationAbilitySlot();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool IsHoldRequired() const override PURE_VIRTUAL(IsHoldRequired, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetHoldProgress() const override PURE_VIRTUAL(GetHoldProgress, return 0.0f;);
    
};

