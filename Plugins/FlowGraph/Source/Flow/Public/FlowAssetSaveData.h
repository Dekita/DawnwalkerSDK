#pragma once
#include "CoreMinimal.h"
#include "FlowNodeSaveData.h"
#include "FlowAssetSaveData.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FFlowAssetSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString InstanceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> AssetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FFlowNodeSaveData> NodeRecords;
    
    FFlowAssetSaveData();
};

