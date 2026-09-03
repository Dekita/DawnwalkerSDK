#pragma once
#include "CoreMinimal.h"
#include "RebelFormationPositionDefinition.generated.h"

USTRUCT(BlueprintType)
struct REBELFORMATION_API FRebelFormationPositionDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 X;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Y;
    
public:
    FRebelFormationPositionDefinition();
};

