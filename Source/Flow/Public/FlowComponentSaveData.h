#pragma once
#include "CoreMinimal.h"
#include "FlowComponentSaveData.generated.h"

USTRUCT(BlueprintType)
struct FLOW_API FFlowComponentSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString ActorInstanceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<uint8> ComponentData;
    
    FFlowComponentSaveData();
};

