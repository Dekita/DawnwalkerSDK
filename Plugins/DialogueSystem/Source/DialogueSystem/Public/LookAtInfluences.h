#pragma once
#include "CoreMinimal.h"
#include "LookAtInfluences.generated.h"

USTRUCT(BlueprintType)
struct FLookAtInfluences {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadInfluencePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeckInfluencePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChestInfluencePercent;
    
    DIALOGUESYSTEM_API FLookAtInfluences();
};

