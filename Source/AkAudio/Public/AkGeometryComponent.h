#pragma once
#include "CoreMinimal.h"
#include "AkAcousticTextureSetComponent.h"
#include "AkGeometryData.h"
#include "AkGeometrySurfaceOverride.h"
#include "AkMeshType.h"
#include "AkGeometryComponent.generated.h"

class UAkAcousticTexture;
class UMaterialInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkGeometryComponent : public UAkAcousticTextureSetComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AkMeshType MeshType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeldingThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDiffraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDiffractionOnBoundaryEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBypassPortalSubtraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSolid;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAkGeometryData GeometryData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, double> SurfaceAreas;
    
public:
    UAkGeometryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateGeometry();
    
    UFUNCTION(BlueprintCallable)
    bool SetTransmissionLossOverride(UMaterialInterface* InMaterialInterface, float InTransmissionLoss, bool bInEnableTransmissionLossOverride, FAkGeometrySurfaceOverride& OutAcousticPropertiesOverride);
    
    UFUNCTION(BlueprintCallable)
    bool SetEnableTransmissionLossOverride(UMaterialInterface* InMaterialInterface, bool bInEnableTransmissionLossOverride, FAkGeometrySurfaceOverride& OutAcousticPropertiesOverride);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableDiffraction(bool bInEnableDiffraction, bool bInEnableDiffractionOnBoundaryEdges);
    
    UFUNCTION(BlueprintCallable)
    bool SetAcousticTextureOverride(UMaterialInterface* InMaterialInterface, UAkAcousticTexture* InAcousticTexture, FAkGeometrySurfaceOverride& OutAcousticPropertiesOverride);
    
    UFUNCTION(BlueprintCallable)
    bool SetAcousticPropertiesOverride(UMaterialInterface* InMaterialInterface, FAkGeometrySurfaceOverride InAcousticPropertiesOverride, FAkGeometrySurfaceOverride& OutAcousticPropertiesOverride);
    
    UFUNCTION(BlueprintCallable)
    void SendGeometry();
    
    UFUNCTION(BlueprintCallable)
    void RemoveGeometry();
    
    UFUNCTION(BlueprintCallable)
    bool GetAcousticPropertiesOverride(UMaterialInterface* InMaterialInterface, FAkGeometrySurfaceOverride& OutAcousticPropertiesOverride);
    
    UFUNCTION(BlueprintCallable)
    void ConvertMesh();
    
};

