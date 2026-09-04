#pragma once
#include "CoreMinimal.h"
#include "FactRequest.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeFactSetInt.generated.h"

UCLASS(Blueprintable)
class QUEST_API UQuestNodeFactSetInt : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactRequest Fact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NewValue;
    
public:
    UQuestNodeFactSetInt();

};

