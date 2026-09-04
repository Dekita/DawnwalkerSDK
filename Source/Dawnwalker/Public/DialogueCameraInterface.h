#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CameraSpecHandle.h"
#include "DialogueCameraInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UDialogueCameraInterface : public UInterface {
    GENERATED_BODY()
};

class IDialogueCameraInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCameraFOV(float NewFOV);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FCameraSpecHandle GetCameraHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCameraFOV() const;
    
};

