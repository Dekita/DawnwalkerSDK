#pragma once
#include "CoreMinimal.h"
#include "LookAtSpaces.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FLookAtSpaces {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HeadWorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NeckWorldSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EyesWorldSpace;
    
    FLookAtSpaces();
};

