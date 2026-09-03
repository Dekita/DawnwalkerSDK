#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "EChapelState.h"
#include "QuestNodeSetGlobalChapelState.generated.h"

UCLASS(Blueprintable)
class DOGWOODWORLD_API UQuestNodeSetGlobalChapelState : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChapelState State;
    
public:
    UQuestNodeSetGlobalChapelState();

};

