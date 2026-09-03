#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "DogwoodControlsLegendCondition.h"
#include "DogwoodControlsLegendCondition_Composite.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODSYSTEM_API FDogwoodControlsLegendCondition_Composite : public FDogwoodControlsLegendCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> Conditions;
    
public:
    FDogwoodControlsLegendCondition_Composite();
};

