#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_Invisibility.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODANIM_API UAnimNotifyState_Invisibility : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPassThrowPawns;
    
    UAnimNotifyState_Invisibility();

};

