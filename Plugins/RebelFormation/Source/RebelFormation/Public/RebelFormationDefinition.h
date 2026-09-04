#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RebelFormationFormationSlotDefinition.h"
#include "RebelFormationDefinition.generated.h"

UCLASS(Blueprintable)
class REBELFORMATION_API URebelFormationDefinition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelFormationFormationSlotDefinition> FormationSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelFormationFormationSlotDefinition> TransportSlots;
    
    URebelFormationDefinition();

};

