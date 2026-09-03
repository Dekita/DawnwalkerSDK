#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RebelFormationPawnDefinition.h"
#include "RebelFormationGroupDefinition.generated.h"

UCLASS(Blueprintable)
class REBELFORMATION_API URebelFormationGroupDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelFormationPawnDefinition> Pawns;
    
    URebelFormationGroupDefinition();

};

