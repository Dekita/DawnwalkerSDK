#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_TryRestoreSwordAfterAA.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class DOGWOODCOMBAT_API UAnimNotify_TryRestoreSwordAfterAA : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipAnim;
    
    UAnimNotify_TryRestoreSwordAfterAA();

};

