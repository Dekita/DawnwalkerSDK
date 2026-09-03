#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "SingleObjectiveMappinRow.h"
#include "QuestNodeMappinBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UQuestNodeMappinBase : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSingleObjectiveMappinRow ObjectiveAndMappin;
    
public:
    UQuestNodeMappinBase();

};

