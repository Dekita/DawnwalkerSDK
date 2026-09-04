#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeEnd.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UQuestNodeEnd : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTerminatesSketch;
    
public:
    UQuestNodeEnd();

};

