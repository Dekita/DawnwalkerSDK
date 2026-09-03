#include "ItemClothingDataAsset.h"
#include "EItemType.h"

UItemClothingDataAsset::UItemClothingDataAsset() {
    this->ItemProperties = 5;
    this->ItemType = EItemType::Clothing;
    this->EquipmentSlotType = EEquipmentSlotType::None;
    this->SoundType = EClothingSoundType::Cloth;
    this->ArmorType = EArmorType::None;
    this->Armor_Toughness = 10.00f;
    this->bSetUpEquipmentSlots = false;
}

bool UItemClothingDataAsset::IsArmor() const {
    return false;
}

float UItemClothingDataAsset::GetArmorToughness(const FItemHandle& ThisItemHandle, const UAbilitySystemComponent* AbilitySystemComponent) const {
    return 0.0f;
}


