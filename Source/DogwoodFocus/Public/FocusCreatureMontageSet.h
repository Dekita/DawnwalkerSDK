#pragma once
#include "CoreMinimal.h"
#include "FocusCreatureMontagePair.h"
#include "FocusCreatureMontageSet.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODFOCUS_API FFocusCreatureMontageSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFocusCreatureMontagePair> FocusMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDeathAnimationWithCurrentAnimationIfTargetDies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopThisAnimationOnExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetWaitOnHitEvent;
    
    FFocusCreatureMontageSet();
};

