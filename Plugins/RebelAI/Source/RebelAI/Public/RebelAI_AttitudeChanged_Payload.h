#pragma once
#include "CoreMinimal.h"
#include "ERebelAIAttitude.h"
#include "RebelAI_WithStub_Payload.h"
#include "RebelAI_AttitudeChanged_Payload.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_AttitudeChanged_Payload : public FRebelAI_WithStub_Payload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* OtherStub;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIAttitude PreviousAttitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIAttitude NewAttitude;
    
    FRebelAI_AttitudeChanged_Payload();
};

