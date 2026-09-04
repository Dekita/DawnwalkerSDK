#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RebelLocomotionConditionAsset.h"
#include "RebelLocomotionConditionSet.generated.h"

UCLASS(Blueprintable)
class REBELLOCOMOTION_API URebelLocomotionConditionSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelLocomotionConditionAsset> Conditions;
    
    URebelLocomotionConditionSet();

};

