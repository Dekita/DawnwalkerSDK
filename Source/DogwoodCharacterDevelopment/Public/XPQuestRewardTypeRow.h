#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EQuestExperienceRewardAmount.h"
#include "XPQuestRewardTypeRow.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODCHARACTERDEVELOPMENT_API FXPQuestRewardTypeRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestExperienceRewardAmount QuestXPRewardType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestXPRewardNormal;
    
    FXPQuestRewardTypeRow();
};

