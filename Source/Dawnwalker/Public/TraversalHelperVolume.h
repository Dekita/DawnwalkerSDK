#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Volume.h"
#include "ETraversalHelperType.h"
#include "TraversalHelperEdge.h"
#include "TraversalHelperVolume.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API ATraversalHelperVolume : public AVolume {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTraversalHelperEdge> PlatformTopOutlineEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlatformCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETraversalHelperType Type;
    
public:
    ATraversalHelperVolume(const FObjectInitializer& ObjectInitializer);

};

