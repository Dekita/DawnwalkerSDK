#pragma once
#include "CoreMinimal.h"
#include "RebelAIParams.h"
#include "RebelAIParams_Follower.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Follower : public FRebelAIParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceThenTeleport;
    
    FRebelAIParams_Follower();
};

