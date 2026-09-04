#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RebelFormationDataDefinition.generated.h"

class URebelFormationDefinition;

UCLASS(Blueprintable)
class REBELFORMATION_API URebelFormationDataDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelFormationDefinition* Formation;
    
    URebelFormationDataDefinition();

};

