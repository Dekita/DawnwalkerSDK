#pragma once
#include "CoreMinimal.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_MovementProfile.generated.h"

class URebelCharacterMovementProfile;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_MovementProfile : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelCharacterMovementProfile* MovementProfile;
    
    FRebelAILogicNodeDecorator_MovementProfile();
};

