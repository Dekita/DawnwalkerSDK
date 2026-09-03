#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RebelNavigationVoxelColumn.h"
#include "RebelNavigationVoxelLayer.generated.h"

class URebelNavigationLayerHISMComponent;

USTRUCT(BlueprintType)
struct REBELNAVIGATION_API FRebelNavigationVoxelLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntPoint, FRebelNavigationVoxelColumn> Columns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URebelNavigationLayerHISMComponent* HISM;
    
    FRebelNavigationVoxelLayer();
};

