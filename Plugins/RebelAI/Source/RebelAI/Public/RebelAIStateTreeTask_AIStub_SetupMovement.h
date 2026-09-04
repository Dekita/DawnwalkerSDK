#pragma once
#include "CoreMinimal.h"
#include "RebelAIStateTreeTask_AIStub.h"
#include "RebelAIStateTreeTask_AIStub_SetupMovement.generated.h"

class URebelCharacterMovementProfile;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_AIStub_SetupMovement : public FRebelAIStateTreeTask_AIStub {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelCharacterMovementProfile* MovementProfile;
    
    FRebelAIStateTreeTask_AIStub_SetupMovement();
};

