#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAbilityActivationOutcome.h"
#include "EAbilityCostOutcomeMask.h"
#include "EArmorType.h"
#include "ECraftingResult.h"
#include "EEquipmentSlotType.h"
#include "EItemType.h"
#include "EItemUsableResult.h"
#include "EItemWeaponSubtype.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayAttribute.h"
#include "EAttributeValueDisplayType.h"
#include "ULocalizationBlueprintLibrary.generated.h"

class UBinkMediaPlayer;

UCLASS(Blueprintable)
class DOGWOODUI_API UULocalizationBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UULocalizationBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetBinkMediaPlayerSoundTrack(UBinkMediaPlayer* InBinkMediaPlayer, int32 InTrack);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPositiveGameplayAttribute(const FGameplayAttribute& GameplayAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetWeaponTypeLocalizedName(const EItemWeaponSubtype& WeaponType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetItemUsableResultLocalizedName(const EItemUsableResult& UsableResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetItemTypeLocalizedName(const EItemType& ItemType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetGameplayAttributeLocalizedName(const FGameplayAttribute& GameplayAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetGameplayAttributeFullRestoreLocalizedText(const FGameplayAttribute& GameplayAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetEquipmentSlotTypeLocalizedName(const EEquipmentSlotType& EquipmentSlotType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetCraftingResultLocalizedName(const ECraftingResult& CraftingResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBinkMediaPlayerLocalizationSoundTrackIndex();
    
    UFUNCTION(BlueprintCallable)
    static FIntPoint GetBinkMediaPlayerDimensions(UBinkMediaPlayer* InBinkMediaPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<EAttributeValueDisplayType> GetAttributeValueDisplayType(const FGameplayAttribute& GameplayAttribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetArmorTypeLocalizedName(const EArmorType& ArmorType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetAbilityActivationFailureTypeLocalizedText(const EAbilityActivationOutcome& FailureResult, const EAbilityCostOutcomeMask& AbilityCostOutcomeMask);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanShowIntroCinematicOnStartup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanShowIntroCinematic();
    
};

