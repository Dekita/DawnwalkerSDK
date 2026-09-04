#pragma once
#include "CoreMinimal.h"
#include "CustomGestureConfig.h"
#include "LineGestureGenerationData.generated.h"

USTRUCT(BlueprintType)
struct FLineGestureGenerationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateRandomGestures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomGestureConfig> CustomGestures;
    
    DIALOGUESYSTEM_API FLineGestureGenerationData();
};

