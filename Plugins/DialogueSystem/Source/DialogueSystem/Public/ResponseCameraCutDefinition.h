#pragma once
#include "CoreMinimal.h"
#include "ECameraShot.h"
#include "ResponseCameraCutDefinition.generated.h"

USTRUCT(BlueprintType)
struct FResponseCameraCutDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraShot Shot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Repetitions;
    
    DIALOGUESYSTEM_API FResponseCameraCutDefinition();
};

