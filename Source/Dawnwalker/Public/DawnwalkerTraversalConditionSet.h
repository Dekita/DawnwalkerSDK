#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DawnwalkerTraversalCondition.h"
#include "DawnwalkerTraversalConditionSet.generated.h"

UCLASS(Blueprintable)
class UDawnwalkerTraversalConditionSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDawnwalkerTraversalCondition> Conditions;
    
    UDawnwalkerTraversalConditionSet();

};

