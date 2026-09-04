#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NavRelevantComponent.h"
#include "Templates/SubclassOf.h"
#include "RebelNavigationDataExportComponent_SplineMesh.generated.h"

class UNavAreaBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELNAVIGATION_API URebelNavigationDataExportComponent_SplineMesh : public UNavRelevantComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> AreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBox> CachedBoxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> CachedBoxTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasProjectAverageWorldZ;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ProjectAverageWorldZ;
    
public:
    URebelNavigationDataExportComponent_SplineMesh(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCacheFromOwner();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugCachedBoxes(float LifeTimeSeconds);
    
};

