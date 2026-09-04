#pragma once
#include "CoreMinimal.h"
#include "StandardDefenseConfig.generated.h"

USTRUCT(BlueprintType)
struct FStandardDefenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseSuccessRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RatioIncreaseOnFail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RatioDecreaseOnSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeltaReturnToBase;
    
    DOGWOODCOMBAT_API FStandardDefenseConfig();
};

