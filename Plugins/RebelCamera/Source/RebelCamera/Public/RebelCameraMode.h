#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AlphaBlend.h"
#include "Engine/Scene.h"
#include "ECameraModeState.h"
#include "EPostProcessApplicationMode.h"
#include "RebelCameraMode.generated.h"

class AActor;
class URebelCameraComponent;

UCLASS(Blueprintable)
class REBELCAMERA_API URebelCameraMode : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPopRemovesFromStackWhenNotOnTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs BlendInArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs BlendOutArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreezeOtherCamerasDuringBlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultFieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewPitchMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewPitchMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClampViewSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableCameraVerticalLag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableCameraHorizontalLag: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseCameraLagSubstepping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraVerticalLagSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraHorizontalLagSpeed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLagMaxTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraVerticalLagMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraHorizontalLagMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyPostProcessing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPostProcessApplicationMode PostProcessOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
public:
    URebelCameraMode();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECameraModeState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetPivotRotation(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetPivotLocation(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetFieldOfView();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URebelCameraComponent* GetCameraComponent() const;
    
};

