#pragma once
#include "CoreMinimal.h"
#include "RebelAI_Payload.h"
#include "RebelAI_Bool_Payload.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_Bool_Payload : public FRebelAI_Payload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    FRebelAI_Bool_Payload();
};

