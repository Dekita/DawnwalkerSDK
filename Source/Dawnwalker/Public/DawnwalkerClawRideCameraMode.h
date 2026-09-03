#pragma once
#include "CoreMinimal.h"
#include "RebelCameraModeTPP.h"
#include "DawnwalkerClawRideCameraMode.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerClawRideCameraMode : public URebelCameraModeTPP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseEnterClawRidePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnterClawRidePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendInTimeFromAntiGrav;
    
    UDawnwalkerClawRideCameraMode();

};

