#include "ULocalizationBlueprintLibrary.h"

UULocalizationBlueprintLibrary::UULocalizationBlueprintLibrary() {
}

void UULocalizationBlueprintLibrary::SetBinkMediaPlayerSoundTrack(UBinkMediaPlayer* InBinkMediaPlayer, int32 InTrack) {
}

bool UULocalizationBlueprintLibrary::IsPositiveGameplayAttribute(const FGameplayAttribute& GameplayAttribute) {
    return false;
}

FText UULocalizationBlueprintLibrary::GetWeaponTypeLocalizedName(const EItemWeaponSubtype& WeaponType) {
    return FText::GetEmpty();
}

FText UULocalizationBlueprintLibrary::GetItemUsableResultLocalizedName(const EItemUsableResult& UsableResult) {
    return FText::GetEmpty();
}

FText UULocalizationBlueprintLibrary::GetItemTypeLocalizedName(const EItemType& ItemType) {
    return FText::GetEmpty();
}

FText UULocalizationBlueprintLibrary::GetGameplayAttributeLocalizedName(const FGameplayAttribute& GameplayAttribute) {
    return FText::GetEmpty();
}

FText UULocalizationBlueprintLibrary::GetGameplayAttributeFullRestoreLocalizedText(const FGameplayAttribute& GameplayAttribute) {
    return FText::GetEmpty();
}

FText UULocalizationBlueprintLibrary::GetEquipmentSlotTypeLocalizedName(const EEquipmentSlotType& EquipmentSlotType) {
    return FText::GetEmpty();
}

FText UULocalizationBlueprintLibrary::GetCraftingResultLocalizedName(const ECraftingResult& CraftingResult) {
    return FText::GetEmpty();
}

int32 UULocalizationBlueprintLibrary::GetBinkMediaPlayerLocalizationSoundTrackIndex() {
    return 0;
}

FIntPoint UULocalizationBlueprintLibrary::GetBinkMediaPlayerDimensions(UBinkMediaPlayer* InBinkMediaPlayer) {
    return FIntPoint{};
}

TEnumAsByte<EAttributeValueDisplayType> UULocalizationBlueprintLibrary::GetAttributeValueDisplayType(const FGameplayAttribute& GameplayAttribute) {
    return Integral;
}

FText UULocalizationBlueprintLibrary::GetArmorTypeLocalizedName(const EArmorType& ArmorType) {
    return FText::GetEmpty();
}

FText UULocalizationBlueprintLibrary::GetAbilityActivationFailureTypeLocalizedText(const EAbilityActivationOutcome& FailureResult, const EAbilityCostOutcomeMask& AbilityCostOutcomeMask) {
    return FText::GetEmpty();
}

bool UULocalizationBlueprintLibrary::CanShowIntroCinematicOnStartup() {
    return false;
}

bool UULocalizationBlueprintLibrary::CanShowIntroCinematic() {
    return false;
}


