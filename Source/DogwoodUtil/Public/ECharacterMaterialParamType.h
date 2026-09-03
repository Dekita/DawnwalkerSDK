#pragma once
#include "CoreMinimal.h"
#include "ECharacterMaterialParamType.generated.h"

UENUM(BlueprintType)
enum class ECharacterMaterialParamType : uint8 {
    BloodDrink,
    BloodTears,
    BloodVeins,
    BloodBoil,
    ReservedParameters = 15,
    VFX_Reserved_00 = ReservedParameters,
    VFX_Reserved_01,
    VFX_Reserved_02,
    VFX_Reserved_03,
    VFX_Reserved_04,
    VFX_Reserved_05,
    VFX_Reserved_06,
    VFX_Reserved_07,
    VFX_Reserved_08,
    VFX_Reserved_09,
    Mask_Reserved_00,
    Mask_Reserved_01,
    Mask_Reserved_02,
    Mask_Reserved_03,
    Mask_Reserved_04,
    CharacterMask_Body,
    CharacterMask_Gauntlets,
    CharacterMask_GarmentMask,
    CharacterMask_Reserved3,
    CharacterMask_Reserved4,
    CharacterMask_Reserved5,
    Max,
};

