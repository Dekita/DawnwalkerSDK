#pragma once
#include "CoreMinimal.h"
#include "EItemMaterialType.generated.h"

UENUM(BlueprintType)
enum class EItemMaterialType : uint8 {
    None,
    GenericItem,
    MetalSmall,
    MetalLarge,
    Chain,
    Cloth,
    Wood,
    Glass,
    Jewellery,
    Paper,
    FoleyItem,
    Sword,
    Mace,
    Axe,
    Food,
    Book,
    Knife,
    Drink,
    Herb,
    Potion,
    Flesh,
    Coins,
    Key,
    Salve,
};

