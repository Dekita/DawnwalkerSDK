#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorReference.h"
#include "QuestNode.h"
#include "QuestNodeTransportBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UQuestNodeTransportBase : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference TransportReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TransportGuid;
    
public:
    UQuestNodeTransportBase();

};

