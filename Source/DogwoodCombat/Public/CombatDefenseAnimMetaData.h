#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimMetaData.h"
#include "EWeaponSlot.h"
#include "CombatDefenseAnimMetaData.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODCOMBAT_API UCombatDefenseAnimMetaData : public UAnimMetaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeaponSlot WeaponSlot;
    
    UCombatDefenseAnimMetaData();

};

