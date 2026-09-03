#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "CinematicIdleParams.h"
#include "ECinematicIdleType.h"
#include "CinematicAnimInstanceBaseProxy.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCinematicAnimInstanceBaseProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECinematicIdleType, FCinematicIdleParams> ParamsByType;
    
    FCinematicAnimInstanceBaseProxy();
};

