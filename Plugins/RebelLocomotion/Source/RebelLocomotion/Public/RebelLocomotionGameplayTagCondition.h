#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "RebelLocomotionGameplayTagCondition.generated.h"

UCLASS(Blueprintable)
class REBELLOCOMOTION_API URebelLocomotionGameplayTagCondition : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Condition;
    
    URebelLocomotionGameplayTagCondition();

};

