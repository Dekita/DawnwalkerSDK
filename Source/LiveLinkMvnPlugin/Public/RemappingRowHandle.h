#pragma once
#include "CoreMinimal.h"
#include "EXsensMapping.h"
#include "RemappingRowHandle.generated.h"

USTRUCT(BlueprintType)
struct LIVELINKMVNPLUGIN_API FRemappingRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EXsensMapping XsensRemapId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RemapId;
    
    FRemappingRowHandle();
};

