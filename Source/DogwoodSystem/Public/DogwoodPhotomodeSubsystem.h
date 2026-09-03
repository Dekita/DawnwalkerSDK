#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "DogwoodPhotomodeSubsystem.generated.h"

class APhotoCameraActor;
class UDogwoodPhotomodeSubsystem;
class UObject;

UCLASS(Blueprintable)
class DOGWOODSYSTEM_API UDogwoodPhotomodeSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APhotoCameraActor* PhotoCamera;
    
public:
    UDogwoodPhotomodeSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldPhotomodePauseGame();
    
    UFUNCTION(BlueprintCallable)
    static void SetInvestigationInProgress(bool bValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPhotoModeEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPhotomodeActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPhotomodeCameraMovementSpeed();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetPhotomodeCameraMaxDistance();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDogwoodPhotomodeSubsystem* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void DeactivatePhotomode();
    
    UFUNCTION(BlueprintCallable)
    void CapturePlayerInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanActivatePhotomode() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivatePhotomode();
    
};

