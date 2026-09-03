#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EItemBookFilter.h"
#include "LootTableItemGroup.h"
#include "RandomizedItemSet.h"
#include "LootTableSetConfig.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODINVENTORY_API FLootTableSetConfig : public FRandomizedItemSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnSkillBook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSpawnSkillBook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemBookFilter SkillBookFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RegionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OptionCheckbox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLootTableItemGroup> LootTableGroups;
    
    FLootTableSetConfig();
};

