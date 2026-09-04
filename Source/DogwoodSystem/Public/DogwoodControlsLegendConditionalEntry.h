#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "DogwoodControlsLegendEntry.h"
#include "DogwoodControlsLegendConditionalEntry.generated.h"

USTRUCT(BlueprintType)
struct FDogwoodControlsLegendConditionalEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDogwoodControlsLegendEntry> Entries;
    
    DOGWOODSYSTEM_API FDogwoodControlsLegendConditionalEntry();
};

