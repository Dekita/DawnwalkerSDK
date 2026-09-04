#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "ERebelSKURegion.h"
#include "AppearanceLocalizationOverride.generated.h"

class UAppearanceBase;

USTRUCT(BlueprintType)
struct FAppearanceLocalizationOverride : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LocalizationID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ERebelSKURegion> ApplyInRegions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppearanceBase* ReplacementAppearance;
    
    DOGWOODINVENTORY_API FAppearanceLocalizationOverride();
};

