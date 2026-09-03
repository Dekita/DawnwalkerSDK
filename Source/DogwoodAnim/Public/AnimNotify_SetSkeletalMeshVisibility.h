#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_SetSkeletalMeshVisibility.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class DOGWOODANIM_API UAnimNotify_SetSkeletalMeshVisibility : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewVisibility;
    
    UAnimNotify_SetSkeletalMeshVisibility();

};

