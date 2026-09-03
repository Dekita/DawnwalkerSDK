#pragma once
#include "CoreMinimal.h"
#include "ESynchronizationPositionOrientation.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_AASynchronizeTargetLocation.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DOGWOODCOMBAT_API UAnimNotify_AASynchronizeTargetLocation : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOrientateBackToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotationOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSynchronizeZAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynchronizationPositionOrientation AdditionalSynchronizationPositionOrientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetKinematicBonesUpdateType;
    
    UAnimNotify_AASynchronizeTargetLocation();

};

