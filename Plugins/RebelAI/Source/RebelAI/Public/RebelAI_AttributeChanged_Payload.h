#pragma once
#include "CoreMinimal.h"
#include "RebelAI_WithStub_Payload.h"
#include "RebelAI_AttributeChanged_Payload.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_AttributeChanged_Payload : public FRebelAI_WithStub_Payload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NewValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OldValue;
    
    FRebelAI_AttributeChanged_Payload();
};

