#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeOR.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeOR : public UQuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOneInvocation;
    
public:
    UQuestNodeOR();

};

