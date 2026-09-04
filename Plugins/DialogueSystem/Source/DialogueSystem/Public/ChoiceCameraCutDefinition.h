#pragma once
#include "CoreMinimal.h"
#include "ECameraShot.h"
#include "ChoiceCameraCutDefinition.generated.h"

USTRUCT(BlueprintType)
struct FChoiceCameraCutDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraShot Shot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float duration;
    
    DIALOGUESYSTEM_API FChoiceCameraCutDefinition();
};

