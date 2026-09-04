#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AI/Navigation/NavRelevantInterface.h"
#include "RebelRoadsNavVolumeData.h"
#include "RebelRoadsNavDataChunk.generated.h"

UCLASS(Blueprintable)
class REBELROADS_API ARebelRoadsNavDataChunk : public AActor, public INavRelevantInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelRoadsNavVolumeData> SerializedVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SourceGraphId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint CellCoord;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BuildHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBuildMetadata;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SourceChunkSize;
    
public:
    ARebelRoadsNavDataChunk(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void DrawDebug();
    

    // Fix for true pure virtual functions not being implemented
};

