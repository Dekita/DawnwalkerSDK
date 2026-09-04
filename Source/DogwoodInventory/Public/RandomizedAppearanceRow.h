#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "RandomizedAppearanceRow.generated.h"

class UAppearanceBase;

USTRUCT(BlueprintType)
struct FRandomizedAppearanceRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppearanceBase* AppearanceDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoiceTagOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterNameOverride;
    
    DOGWOODINVENTORY_API FRandomizedAppearanceRow();
};

