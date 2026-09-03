#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineMeshComponent.h"
#include "Components/SplineMeshComponent.h"
#include "HoudiniInputMeshComponent.h"
#include "HoudiniInputSplineMeshComponent.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputSplineMeshComponent : public UHoudiniInputMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid MeshPackageGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* GeneratedMesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESplineMeshAxis::Type> CachedForwardAxis;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplineMeshParams CachedSplineParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CachedSplineUpDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedSplineBoundaryMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedSplineBoundaryMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CachedbSmoothInterpRollScale: 1;
    
public:
    UHoudiniInputSplineMeshComponent();

};

