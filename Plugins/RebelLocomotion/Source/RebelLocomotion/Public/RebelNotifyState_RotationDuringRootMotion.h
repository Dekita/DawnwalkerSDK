#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RebelNotifyState_RotationDuringRootMotion.generated.h"

class URebelRotationDuringRootMotionConfig;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELLOCOMOTION_API URebelNotifyState_RotationDuringRootMotion : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelRotationDuringRootMotionConfig* Config;
    
    URebelNotifyState_RotationDuringRootMotion();

};

