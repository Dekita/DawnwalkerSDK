#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_AAHit.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODCOMBAT_API UAnimNotify_AAHit : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipApplyingDamageAndEffects;
    
    UAnimNotify_AAHit();

};

