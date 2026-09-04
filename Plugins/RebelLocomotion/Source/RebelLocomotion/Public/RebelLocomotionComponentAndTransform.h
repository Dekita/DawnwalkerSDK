#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelLocomotionComponentAndTransform.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FRebelLocomotionComponentAndTransform {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    REBELLOCOMOTION_API FRebelLocomotionComponentAndTransform();
};

