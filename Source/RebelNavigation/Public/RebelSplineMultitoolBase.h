#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RebelNavMeshGenerationExtensionOwnerInterface.h"
#include "Templates/SubclassOf.h"
#include "RebelSplineMultitoolBase.generated.h"

class UNavAreaBase;
class URebelNavigationDataExportComponent_SplineMesh;
class URebelNavigationGenerationExtension;

UCLASS(Abstract, Blueprintable)
class REBELNAVIGATION_API ARebelSplineMultitoolBase : public AActor, public IRebelNavMeshGenerationExtensionOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacyNavigationSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillCollisionUnderneathForNavmesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelNavigationGenerationExtension* NavGenerationExtension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverAffectNavigationGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrudeUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrudeDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrudeAlong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrudeAside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSplitOnAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseZProjection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> AreaClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelNavigationDataExportComponent_SplineMesh* SplineMeshExportComponent;
    
public:
    ARebelSplineMultitoolBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DrawDebugCachedBoxes() const;
    

    // Fix for true pure virtual functions not being implemented
};

