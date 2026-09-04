#pragma once
#include "CoreMinimal.h"
#include "FactRequest.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeFactIncrementInt.generated.h"

UCLASS(Blueprintable)
class UQuestNodeFactIncrementInt : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactRequest Fact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IncrementValue;
    
public:
    UQuestNodeFactIncrementInt();

};

