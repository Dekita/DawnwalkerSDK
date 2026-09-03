#pragma once
#include "CoreMinimal.h"
#include "EQuestNodeTransportState.h"
#include "QuestNodeTransportBase.h"
#include "QuestNodeTransportManager.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeTransportManager : public UQuestNodeTransportBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestNodeTransportState Action;
    
public:
    UQuestNodeTransportManager();

};

