#pragma once
#include "CoreMinimal.h"
#include "QuestAssetExtension.h"
#include "QuestLevelRequirementExtension.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSYSTEM_API FQuestLevelRequirementExtension : public FQuestAssetExtension {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SuggestedLevel;
    
    FQuestLevelRequirementExtension();
};

