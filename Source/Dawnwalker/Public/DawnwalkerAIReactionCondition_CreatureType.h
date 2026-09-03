#pragma once
#include "CoreMinimal.h"
#include "CreatureTypeContainer.h"
#include "RebelAIReactionCondition.h"
#include "DawnwalkerAIReactionCondition_CreatureType.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIReactionCondition_CreatureType : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer CreatureType;
    
    FDawnwalkerAIReactionCondition_CreatureType();
};

