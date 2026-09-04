#pragma once
#include "CoreMinimal.h"
#include "WorldPartition/DataLayer/ActorDataLayer.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "QuestNode.h"
#include "QuestNodeManageLayer.generated.h"

UCLASS(Blueprintable)
class UQuestNodeManageLayer : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorDataLayer> Layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataLayerRuntimeState NewState;
    
public:
    UQuestNodeManageLayer();

};

