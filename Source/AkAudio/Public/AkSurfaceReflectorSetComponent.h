#pragma once
#include "CoreMinimal.h"
#include "AkAcousticTextureSetComponent.h"
#include "AkSurfacePoly.h"
#include "AkSurfaceReflectorSetComponent.generated.h"

class UAkAcousticTexture;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSurfaceReflectors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAkSurfacePoly> AcousticPolys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDiffraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDiffractionOnBoundaryEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBypassPortalSubtraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSolid;
    
    UAkSurfaceReflectorSetComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSurfaceReflectorSet();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAcousticProperties(TArray<FAkSurfacePoly> in_AcousticPolys);
    
    UFUNCTION(BlueprintCallable)
    void SetTransmissionLoss(UPARAM(Ref) TArray<int32>& InSurfaceIndexesToEdit, float InTransmissionLoss, bool bInEnableSurface);
    
    UFUNCTION(BlueprintCallable)
    void SetSurfaceProperties(UPARAM(Ref) TArray<int32>& InSurfaceIndexesToEdit, FAkSurfacePoly InSurfaceProperties);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSurface(UPARAM(Ref) TArray<int32>& InSurfaceIndexesToEdit, bool bInEnableSurface);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDiffraction(bool bInEnableDiffraction, bool bInEnableDiffractionOnBoundaryEdges);
    
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool bInEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAcousticTexture(UPARAM(Ref) TArray<int32>& InSurfaceIndexesToEdit, UAkAcousticTexture* InAcousticTexture, bool bInEnableSurface);
    
    UFUNCTION(BlueprintCallable)
    void SendSurfaceReflectorSet();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSurfaceReflectorSet();
    
};

