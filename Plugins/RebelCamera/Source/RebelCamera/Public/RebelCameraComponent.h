#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameplayTagContainer.h"
#include "ECameraType.h"
#include "RebelCameraModeHandle.h"
#include "RebelCameraModeSelector.h"
#include "StackedCameraMode.h"
#include "Templates/SubclassOf.h"
#include "RebelCameraComponent.generated.h"

class AActor;
class UObject;
class URebelCameraComponent;
class URebelCameraMode;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELCAMERA_API URebelCameraComponent : public UCameraComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStackedCameraMode> CameraModeStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<URebelCameraMode>> ExplorationCameraModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<URebelCameraMode>> CombatCameraModes;
    
public:
    URebelCameraComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCameraType(ECameraType InType);
    
    UFUNCTION(BlueprintCallable)
    FRebelCameraModeHandle PushDefaultExplorationCameraMode();
    
    UFUNCTION(BlueprintCallable)
    FRebelCameraModeHandle PushDefaultCombatCameraMode();
    
    UFUNCTION(BlueprintCallable)
    FRebelCameraModeHandle PushCameraModeFromSelector(const FRebelCameraModeSelector& InModeSelector, const FGameplayTagContainer& InTags);
    
    UFUNCTION(BlueprintCallable)
    FRebelCameraModeHandle PushCameraMode(TSubclassOf<URebelCameraMode> ModeClass);
    
    UFUNCTION(BlueprintCallable)
    bool PopDefaultExplorationCameraMode();
    
    UFUNCTION(BlueprintCallable)
    bool PopDefaultCombatCameraMode();
    
    UFUNCTION(BlueprintCallable)
    bool PopCameraMode(const FRebelCameraModeHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECameraType GetCameraType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static URebelCameraComponent* FindRebelCameraComponent(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObj"))
    static URebelCameraComponent* FindPlayerRebelCamera(const UObject* WorldContextObj);
    
};

