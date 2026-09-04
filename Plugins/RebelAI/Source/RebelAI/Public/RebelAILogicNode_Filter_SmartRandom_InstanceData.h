#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAILogicNode_InstanceData.h"
#include "RebelAILogicNode_Filter_SmartRandom_InstanceData.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Filter_SmartRandom_InstanceData : public FRebelAILogicNode_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreaseOnFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseOnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GradualReturn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugLogChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideBasedOnLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LevelOverrideTag;
    
    FRebelAILogicNode_Filter_SmartRandom_InstanceData();
};

