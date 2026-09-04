#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ERebelNavigationSplineShapeMode.h"
#include "Templates/SubclassOf.h"
#include "RebelNavigationSpline.generated.h"

class UNavArea;
class URebelNavigationSplineExportComponent;
class USplineComponent;

UCLASS(Blueprintable)
class REBELNAVIGATION_API ARebelNavigationSpline : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanEverAffectNavigationGeneration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelNavigationSplineShapeMode ShapeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePerSegmentExtrudeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrudeTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrudeBottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtrudePadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> AreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavArea> AreaClassToReplace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelNavigationSplineExportComponent* SplineExportComponent;
    
public:
    ARebelNavigationSpline(const FObjectInitializer& ObjectInitializer);

};

