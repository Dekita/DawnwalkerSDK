#pragma once
#include "CoreMinimal.h"
#include "StealableVolumeAffection.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODWORLD_API FStealableVolumeAffection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreStealableVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StealableVolumeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IgnoreStealableVolumeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowExtraPoliceSpawning;
    
    FStealableVolumeAffection();
};

