#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "ECameraPopPolicy.h"
#include "Templates/SubclassOf.h"
#include "CameraSpecDef.generated.h"

class ACinematicCameraActor;
class IDialogueCameraInterface;
class UDialogueCameraInterface;

USTRUCT(BlueprintType)
struct FCameraSpecDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FViewTargetTransitionParams BlendParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECameraPopPolicy::Type> PopPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IDialogueCameraInterface> TargetCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACinematicCameraActor> GameplayCameraClass;
    
    DAWNWALKER_API FCameraSpecDef();
};

