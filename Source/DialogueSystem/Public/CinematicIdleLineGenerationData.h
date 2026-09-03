#pragma once
#include "CoreMinimal.h"
#include "CinematicIdleLineGenerationData.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCinematicIdleLineGenerationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IdleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FCinematicIdleLineGenerationData();
};

