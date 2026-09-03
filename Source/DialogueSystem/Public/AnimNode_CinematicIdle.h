#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Animation/AnimNodeBase.h"
#include "DynamicIdleBlend.h"
#include "ECinematicIdleType.h"
#include "IdleChannelRuntime.h"
#include "AnimNode_CinematicIdle.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FAnimNode_CinematicIdle : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECinematicIdleType Type;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIdleChannelRuntime ChannelA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIdleChannelRuntime ChannelB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDynamicIdleBlend> DynamicBlends;
    
public:
    FAnimNode_CinematicIdle();
};

