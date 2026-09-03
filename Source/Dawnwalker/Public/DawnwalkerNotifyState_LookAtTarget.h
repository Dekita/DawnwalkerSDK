#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "DawnwalkerNotifyState_LookAtTarget.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UDawnwalkerNotifyState_LookAtTarget : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct LookAtTarget;
    
    UDawnwalkerNotifyState_LookAtTarget();

};

