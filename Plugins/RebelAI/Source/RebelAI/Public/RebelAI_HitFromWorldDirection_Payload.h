#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAI_Payload.h"
#include "RebelAI_HitFromWorldDirection_Payload.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_HitFromWorldDirection_Payload : public FRebelAI_Payload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitOrigin;
    
    FRebelAI_HitFromWorldDirection_Payload();
};

