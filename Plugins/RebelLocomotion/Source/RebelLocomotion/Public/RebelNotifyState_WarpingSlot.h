#pragma once
#include "CoreMinimal.h"
#include "AlphaBlend.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "RebelNotifyState_WarpingSlot.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELLOCOMOTION_API URebelNotifyState_WarpingSlot : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotationWarping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs WarpingBlendArgs;
    
    URebelNotifyState_WarpingSlot();

};

