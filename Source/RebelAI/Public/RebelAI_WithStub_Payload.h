#pragma once
#include "CoreMinimal.h"
#include "RebelAI_Payload.h"
#include "RebelAI_WithStub_Payload.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_WithStub_Payload : public FRebelAI_Payload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* Stub;
    
    FRebelAI_WithStub_Payload();
};

