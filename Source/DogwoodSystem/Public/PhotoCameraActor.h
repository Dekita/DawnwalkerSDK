#pragma once
#include "CoreMinimal.h"
#include "GameFramework/DefaultPawn.h"
#include "EPhotoModeState.h"
#include "PhotoCameraActor.generated.h"

class APlayerController;
class UEnhancedInputComponent;
class UInputAction;
class UInputMappingContext;
class URebelCameraComponent;

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API APhotoCameraActor : public ADefaultPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhotoModeState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* CapturedPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelCameraComponent* CapturedCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* PhotoModeMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* CameraMoveAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* CameraVerticalMovementAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* CameraLookAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* CameraFOVAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ReleaseCameraInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnhancedInputComponent* EnhancedInput;
    
public:
    APhotoCameraActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ReleasePlayerInput();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCameraMode() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCameraInput() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ExitPhotoCamera();
    
    UFUNCTION(BlueprintCallable)
    void EnterPhotoCamera();
    
    UFUNCTION(BlueprintCallable)
    void CapturePlayerInput();
    
};

