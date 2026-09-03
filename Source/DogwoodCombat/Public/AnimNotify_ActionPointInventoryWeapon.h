#pragma once
#include "CoreMinimal.h"
#include "EEquipmentSlotType.h"
#include "PropAnimNotify.h"
#include "AnimNotify_ActionPointInventoryWeapon.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODCOMBAT_API UAnimNotify_ActionPointInventoryWeapon : public UPropAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipmentSlotType EqSlot;
    
public:
    UAnimNotify_ActionPointInventoryWeapon();

};

