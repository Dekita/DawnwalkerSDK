#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeAND.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeAND : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneInvocation;
    
public:
    UQuestNodeAND();

};

