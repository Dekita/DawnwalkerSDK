#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "QuestAssetExtension.h"
#include "QuestRegionExtension.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSYSTEM_API FQuestRegionExtension : public FQuestAssetExtension {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RegionTag;
    
    FQuestRegionExtension();
};

