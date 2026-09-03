#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DebugItemPresetEntry.h"
#include "DebugTraitPresetEntry.h"
#include "DebugCharacterPreset.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCHARACTERDEVELOPMENT_API FDebugCharacterPreset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TraitPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugItemPresetEntry> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugTraitPresetEntry> PurchasedTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugTraitPresetEntry> UnlockedTraits;
    
    FDebugCharacterPreset();
};

