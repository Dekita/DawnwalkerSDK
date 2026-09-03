#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_ScaleNPC.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODCOMBAT_API UAnimNotifyState_ScaleNPC : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScalingTime;
    
public:
    UAnimNotifyState_ScaleNPC();

};

