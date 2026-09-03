#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ActorPartition/PartitionActor.h"
#include "BiomesPartitionActor.generated.h"

UCLASS(Blueprintable)
class ERRANTBIOMESRUNTIME_API ABiomesPartitionActor : public APartitionActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FIntPoint> ComponentXYs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrix WorldToComponentTransform;
    
    ABiomesPartitionActor(const FObjectInitializer& ObjectInitializer);

};

