#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNode_SequencePlayer.h"
#include "IdlePoseRuntime.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FIdlePoseRuntime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimNode_SequencePlayer_Standalone Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnimNode_SequencePlayer_Standalone LowIntensityPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* ActiveSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequence* LowIntensitySequence;
    
    DIALOGUESYSTEM_API FIdlePoseRuntime();
};

