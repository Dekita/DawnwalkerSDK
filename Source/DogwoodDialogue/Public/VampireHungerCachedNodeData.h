#pragma once
#include "CoreMinimal.h"
#include "VampireHungerCachedNodeData.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODDIALOGUE_API FVampireHungerCachedNodeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToVampireHungerChoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTimeAmbiguous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVampireHungerChoiceReachable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVampireUrgeChoice;
    
    FVampireHungerCachedNodeData();
};

