#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RebelCameraMode.h"
#include "RebelCameraModeHandle.h"
#include "DawnwalkerCombatShadowstepCameraMode.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerCombatShadowstepCameraMode : public URebelCameraMode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ViewRotationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewLocationOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRebelCameraModeHandle MyHandle;
    
public:
    UDawnwalkerCombatShadowstepCameraMode();

};

