#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "DawnwalkerAnimNotify_HandIKTarget.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class DAWNWALKER_API UDawnwalkerAnimNotify_HandIKTarget : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLeftHandIKTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct LeftHandIKTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRightHandIKTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct RightHandIKTarget;
    
    UDawnwalkerAnimNotify_HandIKTarget();

};

