#pragma once
#include "CoreMinimal.h"
#include "SyncMontageData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FSyncMontageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> PlayerMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> TargetMontage;
    
    FSyncMontageData();
};

