#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "DawnwalkerAIReactionCondition_NoEnemiesNearby.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIReactionCondition_NoEnemiesNearby : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FDawnwalkerAIReactionCondition_NoEnemiesNearby();
};

