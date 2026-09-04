#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "RebelNavMeshGenerationExtensionInterface.h"
#include "ERebelNavigationGenerationExtensionGeometrySource.h"
#include "ERebelNavigationGenerationExtensionMode.h"
#include "RebelNavigationGenerationExtension.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELNAVIGATION_API URebelNavigationGenerationExtension : public UAssetUserData, public IRebelNavMeshGenerationExtensionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceNavMeshHole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrudeTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrudeBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrudeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrudeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelNavigationGenerationExtensionGeometrySource GeometrySource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelNavigationGenerationExtensionMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    URebelNavigationGenerationExtension();


    // Fix for true pure virtual functions not being implemented
};

