#pragma once
#include "CoreMinimal.h"
#include "CinematicIdleParams.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FCinematicIdleParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* B;
    
    DIALOGUESYSTEM_API FCinematicIdleParams();
};

