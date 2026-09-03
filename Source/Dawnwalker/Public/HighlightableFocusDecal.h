#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFocusableObjectCategory.h"
#include "GameFramework/Actor.h"
#include "HighlightableFocusDecal.generated.h"

class UDecalComponent;
class UFocusableComponent;
class UMaterialInterface;
class USceneComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API AHighlightableFocusDecal : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* RealDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFocusableComponent* FocusableComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double VerticesPerMeter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DecalSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ProjectionRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DistanceFromSurface;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DecalRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFocusableObjectCategory ObjectCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConvertedToRealDecal;
    
    AHighlightableFocusDecal(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SetDecalSize(UDecalComponent* Target, FVector Size);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsSplineTrail() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetMeshMaterials(UPARAM(Ref) TArray<UMaterialInterface*>& OutMaterials);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GenerateTrail();
    
};

