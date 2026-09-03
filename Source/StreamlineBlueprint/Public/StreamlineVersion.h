#pragma once
#include "CoreMinimal.h"
#include "StreamlineVersion.generated.h"

USTRUCT(BlueprintType)
struct STREAMLINEBLUEPRINT_API FStreamlineVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Major;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Build;
    
    FStreamlineVersion();
};

