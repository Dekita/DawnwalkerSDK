#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "FogVolumeParam.h"
#include "DWFogVolume.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UStaticMeshComponent;
class UTexture;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class DAWNWALKER_API ADWFogVolume : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VolumeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFogVolumeParam Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* HeightMapRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BrushMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BrushMaterialDmi;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FogTraceMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* FogNoToDMaterialInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* FogTraceDmi;
    
    ADWFogVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestLog(const FString& log, FVector CurrentPosition);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(float FogOffset, float Contrast, float Coverage, float Density, float DetailScale, float Distortion, float DistortionScale, float Height, float Scale, int32 RenderTargetSize, UStaticMeshComponent* Volume, FVector WindDirection, UTexture* MaskTexture, bool bTrace, bool bUseTimeOfDay, FVector ColorA, FVector ColorB);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<ETraceTypeQuery> GetTraceChannel();
    
    UFUNCTION(BlueprintCallable)
    void EndGenerator();
    
};

