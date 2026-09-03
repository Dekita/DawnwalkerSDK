#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "SingleHitNotifyData.h"
#include "AnimNotify_SingleHitSphereTest.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODCOMBAT_API UAnimNotify_SingleHitSphereTest : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleHitNotifyData NotifyData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UAnimNotify_SingleHitSphereTest();

};

