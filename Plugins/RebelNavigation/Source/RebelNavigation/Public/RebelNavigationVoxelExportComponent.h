#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "NavRelevantComponent.h"
#include "RebelNavigationExportStats.h"
#include "RebelNavigationLayerCachedEntry.h"
#include "Templates/SubclassOf.h"
#include "RebelNavigationVoxelExportComponent.generated.h"

class UNavAreaBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class REBELNAVIGATION_API URebelNavigationVoxelExportComponent : public UNavRelevantComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavAreaBase> DefaultAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelNavigationLayerCachedEntry> LocalCachedBoxesByLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CachedLayerOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox LocalCachedCombinedBounds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 CachedRevision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelNavigationExportStats DebugStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FIntPoint> LayerExtrudeOverrideZ;
    
public:
    URebelNavigationVoxelExportComponent(const FObjectInitializer& ObjectInitializer);

};

