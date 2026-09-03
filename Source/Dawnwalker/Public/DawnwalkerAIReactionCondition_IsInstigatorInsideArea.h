#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "Templates/SubclassOf.h"
#include "DawnwalkerAIReactionCondition_IsInstigatorInsideArea.generated.h"

class ADawnwalkerPopulationAreaTrigger;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIReactionCondition_IsInstigatorInsideArea : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADawnwalkerPopulationAreaTrigger> AreaType;
    
    FDawnwalkerAIReactionCondition_IsInstigatorInsideArea();
};

