#pragma once
#include "CoreMinimal.h"
#include "RebelAI_Payload.h"
#include "RebelAI_ItemStolen_Payload.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_ItemStolen_Payload : public FRebelAI_Payload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowExtraPoliceSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAtRiskOfPunishment;
    
    FRebelAI_ItemStolen_Payload();
};

