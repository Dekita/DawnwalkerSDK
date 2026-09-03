#include "ItemWeaponDataAsset.h"
#include "EItemType.h"

UItemWeaponDataAsset::UItemWeaponDataAsset() {
    this->ItemProperties = 5;
    this->ItemType = EItemType::Weapon;
    this->MatchingEquipmentSlots.AddDefaulted(2);
    this->WeaponType = EItemWeaponSubtype::Short;
    this->Weapon_Damage_Min = 10.00f;
    this->Weapon_Damage_Max = 10.00f;
    this->Weapon_DamageAgainstHealthType = EHealthType::Health;
    this->Weapon_DamageAgainstHealthTypeMultiplier = 1.00f;
}

float UItemWeaponDataAsset::GetWeaponDamage(const FItemHandle& ThisItemHandle, EWeaponDamageEdge RangeEdge, const UAbilitySystemComponent* AbilitySystemComponent) const {
    return 0.0f;
}

float UItemWeaponDataAsset::GetDamagePerSecond(uint8 Level, const UAbilitySystemComponent* AbilitySystemComponent) {
    return 0.0f;
}


