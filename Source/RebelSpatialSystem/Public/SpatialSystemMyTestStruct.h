#pragma once
#include "CoreMinimal.h"
#include "SpatialSystemMyTestStruct.generated.h"

USTRUCT(BlueprintType)
struct REBELSPATIALSYSTEM_API FSpatialSystemMyTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataString;
    
    FSpatialSystemMyTestStruct();
};

