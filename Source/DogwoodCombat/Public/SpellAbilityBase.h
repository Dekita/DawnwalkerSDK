#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CombatFocusAbilityBase.h"
#include "Templates/SubclassOf.h"
#include "SpellAbilityBase.generated.h"

class UGameplayEffect;
class UTexture2D;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API USpellAbilityBase : public UCombatFocusAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AdditionalDamageEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ChargeRegainOnSpellCastEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ProlongExistingSpellsCueTag;
    
public:
    USpellAbilityBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetAdditionalDamageText(const float Chance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTexture2D* GetAdditionalDamageIcon() const;
    
};

