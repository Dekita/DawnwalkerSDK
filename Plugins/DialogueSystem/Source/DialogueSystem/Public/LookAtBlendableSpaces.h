#pragma once
#include "CoreMinimal.h"
#include "LookAtBlendableSpaces.generated.h"

USTRUCT(BlueprintType)
struct FLookAtBlendableSpaces {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadWorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NeckWorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EyesWorldSpace;
    
    DIALOGUESYSTEM_API FLookAtBlendableSpaces();
};

