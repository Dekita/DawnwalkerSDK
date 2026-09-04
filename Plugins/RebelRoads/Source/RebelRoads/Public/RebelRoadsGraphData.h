#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "RebelRoadsCrossingConnectionData.h"
#include "RebelRoadsCrossingData.h"
#include "RebelRoadsCrossingProfileData.h"
#include "RebelRoadsLaneData.h"
#include "RebelRoadsLaneLinkData.h"
#include "RebelRoadsLaneProfileData.h"
#include "RebelRoadsQuadTree.h"
#include "RebelRoadsSegmentData.h"
#include "RebelRoadsGraphData.generated.h"

USTRUCT(BlueprintType)
struct REBELROADS_API FRebelRoadsGraphData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelRoadsLaneProfileData> LaneProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelRoadsCrossingProfileData> CrossingProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Nodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LanePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> SegmentConvexPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> CurvePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelRoadsLaneData> Lanes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelRoadsLaneLinkData> LaneLinks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelRoadsSegmentData> Segments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelRoadsCrossingData> Crossings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelRoadsCrossingConnectionData> CrossingConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelRoadsQuadTree QuadTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GraphVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldRebuildRoads;
    
    FRebelRoadsGraphData();
};

