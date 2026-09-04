#pragma once
#include "CoreMinimal.h"
#include "LookAtSpaces.generated.h"

USTRUCT(BlueprintType)
struct FLookAtSpaces {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HeadWorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeckWorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EyesWorldSpace;
    
    DIALOGUESYSTEM_API FLookAtSpaces();
};

