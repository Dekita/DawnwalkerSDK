#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CharDevAbilitySkillTabRow.generated.h"

class UTexture2D;
class UTraitAsset;

USTRUCT(BlueprintType)
struct DOGWOODCHARACTERDEVELOPMENT_API FCharDevAbilitySkillTabRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTraitAsset* Trait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DescriptionBackground;
    
    FCharDevAbilitySkillTabRow();
};

