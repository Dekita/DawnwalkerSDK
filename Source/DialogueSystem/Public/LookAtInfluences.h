#pragma once
#include "CoreMinimal.h"
#include "LookAtInfluences.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FLookAtInfluences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadInfluencePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeckInfluencePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChestInfluencePercent;
    
    FLookAtInfluences();
};

