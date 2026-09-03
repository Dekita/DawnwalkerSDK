#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EBodyMeshType.h"
#include "Components/ActorComponent.h"
#include "AlphaBlend.h"
#include "RebelCollisionDetectorInterface.h"
#include "EDWAntiGravModeStatus.h"
#include "EDawnwalkerAntiGravSurfaceType.h"
#include "RebelGeomFloorTestFlags.h"
#include "Templates/SubclassOf.h"
#include "DWCharacterAntiGravComponent.generated.h"

class UAnimMontage;
class UGameplayEffect;
class UMaterialInterface;
class UNiagaraSystem;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UDWCharacterAntiGravComponent : public UActorComponent, public IRebelCollisionDetectorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityDirectionInterpolator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AntiGravMaxFloorDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AntiGravNormalPredictionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallPredictionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallContactMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallContactMinStride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallMinStepDownHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallMinSlopeDownHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutsideCornerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InsideCornerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundCornerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelGeomFloorTestFlags GroundTestFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelGeomFloorTestFlags CornerTestFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelGeomFloorTestFlags LedgeTestFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeTransitionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeTransitionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeTransitionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AntiGravMaxSlopeHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeProbeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLedgeTransitionTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCornerTransitionTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AntiGravToClawRideMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* NoiseRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* NoiseMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* AntiGravFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBodyMeshType AntiGravFXTargetMeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AntiGravMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialParam_AntiGravOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialParam_AntiGravWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs AntiGravBlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs AntiGravBlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> TransitionGameplayEffects;
    
    UDWCharacterAntiGravComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StoreCurrentState();
    
    UFUNCTION(BlueprintCallable)
    void StopAntiGravMode();
    
    UFUNCTION(BlueprintCallable)
    bool StartClawRide();
    
    UFUNCTION(BlueprintCallable)
    void RestoreLastStoredState();
    
    UFUNCTION(BlueprintCallable)
    void RequestTransition();
    
    UFUNCTION(BlueprintCallable)
    void RequestCancelAntiGrav();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTransitionFinished(bool bWasInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnClawRideTransitionEnd(bool bWasInterrupted, bool bIsClawRiding);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDawnwalkerAntiGravSurfaceType GetAntiGravSurfaceType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAntiGravNormal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDWAntiGravModeStatus GetAntiGravModeStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAntiGravModeEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAntiGravAbility();
    

    // Fix for true pure virtual functions not being implemented
};

