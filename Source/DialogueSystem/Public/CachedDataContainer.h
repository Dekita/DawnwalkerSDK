#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "CachedDataContainer.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FCachedDataContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> CachedData;
    
public:
    FCachedDataContainer();
};

