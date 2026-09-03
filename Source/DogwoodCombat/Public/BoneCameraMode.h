#pragma once
#include "CoreMinimal.h"
#include "RebelCameraModeTPP.h"
#include "BoneCameraMode.generated.h"

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UBoneCameraMode : public URebelCameraModeTPP {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CameraBoneName;
    
public:
    UBoneCameraMode();

};

