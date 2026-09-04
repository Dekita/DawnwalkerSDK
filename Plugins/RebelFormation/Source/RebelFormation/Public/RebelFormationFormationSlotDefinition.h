#pragma once
#include "CoreMinimal.h"
#include "RebelFormationPositionDefinition.h"
#include "RebelFormationFormationSlotDefinition.generated.h"

USTRUCT(BlueprintType)
struct REBELFORMATION_API FRebelFormationFormationSlotDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelFormationPositionDefinition position;
    
    FRebelFormationFormationSlotDefinition();
};

