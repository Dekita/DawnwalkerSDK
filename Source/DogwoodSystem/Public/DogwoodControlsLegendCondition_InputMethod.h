#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "DogwoodControlsLegendCondition.h"
#include "DogwoodControlsLegendCondition_InputMethod.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSYSTEM_API FDogwoodControlsLegendCondition_InputMethod : public FDogwoodControlsLegendCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType InputMethod;
    
public:
    FDogwoodControlsLegendCondition_InputMethod();
};

