#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Interfaces/Interface_PostProcessVolume.h"
#include "GameFramework/Volume.h"
#include "SkyCreatorInteriorFogSettings.h"
#include "InteriorVolumeData.h"
#include "InteriorVolume.generated.h"

class AActor;
class ASkyCreator;
class UInteriorVolumeConfig;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API AInteriorVolume : public AVolume, public IInterface_PostProcessVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePostProcessSettingsFromCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASkyCreator* SkyCreator;
    
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
    AActor* KickOutTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteriorVolumeData OverrideSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FInteriorVolumeData ActiveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSkyCreatorInteriorFogSettings CurrentFogSettings;
    
    AInteriorVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePostProcessSettings();
    
    UFUNCTION(BlueprintCallable)
    void SetTime(float InTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPostProcessFromCurve();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInteriorSubsystemReady();
    
    UFUNCTION(BlueprintCallable)
    void OnBrushEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBrushBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void ApplyInteriorSettings();
    

    // Fix for true pure virtual functions not being implemented
    virtual bool EncompassesPoint(FVector Point, float SphereRadius, float* OutDistanceToPoint) override { return false; }
    virtual FPostProcessVolumeProperties GetProperties() const override { return FPostProcessVolumeProperties{}; }
    virtual FString GetDebugName() const override { return TEXT("InteriorVolume"); }
};

