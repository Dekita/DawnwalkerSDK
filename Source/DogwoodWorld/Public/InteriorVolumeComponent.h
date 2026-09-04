#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Interfaces/Interface_PostProcessVolume.h"
#include "Components/SceneComponent.h"
#include "InteriorVolumeData.h"
#include "InteriorVolumeComponent.generated.h"

class AActor;
class UInteriorVolumeConfig;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(Blueprintable, CollapseCategories, Deprecated, EditInlineNew, MinimalAPI, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDEPRECATED_InteriorVolumeComponent : public USceneComponent, public IInterface_PostProcessVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteriorVolumeConfig* InteriorConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorVolumeData OverrideSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FInteriorVolumeData ActiveSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* ParentShape;
    
public:
    UDEPRECATED_InteriorVolumeComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnParentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnParentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void ApplyPostProcessSettings();
    

    // Fix for true pure virtual functions not being implemented
    virtual bool EncompassesPoint(FVector Point, float SphereRadius, float* OutDistanceToPoint) override { return false; }
    virtual FPostProcessVolumeProperties GetProperties() const override { return FPostProcessVolumeProperties{}; }
    virtual FString GetDebugName() const override { return TEXT("InteriorVolumeComponent"); }
};

