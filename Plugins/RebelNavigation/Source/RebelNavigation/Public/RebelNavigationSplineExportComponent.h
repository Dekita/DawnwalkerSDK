#pragma once
#include "CoreMinimal.h"
#include "NavRelevantComponent.h"
#include "RebelNavigationCachedConvexMesh.h"
#include "Templates/SubclassOf.h"
#include "RebelNavigationSplineExportComponent.generated.h"

class UNavArea;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELNAVIGATION_API URebelNavigationSplineExportComponent : public UNavRelevantComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelNavigationCachedConvexMesh> CachedConvexMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedExtrudeTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachedExtrudeBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCachedIsFilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> CachedAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> CachedAreaClassToReplace;
    
    URebelNavigationSplineExportComponent(const FObjectInitializer& ObjectInitializer);

};

