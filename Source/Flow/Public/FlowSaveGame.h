#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "FlowAssetSaveData.h"
#include "FlowComponentSaveData.h"
#include "FlowSaveGame.generated.h"

UCLASS(Blueprintable)
class FLOW_API UFlowSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlowComponentSaveData> FlowComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFlowAssetSaveData> FlowInstances;
    
    UFlowSaveGame();

};

