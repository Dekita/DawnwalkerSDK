#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "AnimNotifyState_ReplaceWeapons.generated.h"

class AWeaponBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODCOMBAT_API UAnimNotifyState_ReplaceWeapons : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CharacterSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponBase> WeaponClass;
    
public:
    UAnimNotifyState_ReplaceWeapons();

};

