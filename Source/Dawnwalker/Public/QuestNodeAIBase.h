#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeAIBase.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UQuestNodeAIBase : public UQuestNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Definition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryName;
    
public:
    UQuestNodeAIBase();

};

