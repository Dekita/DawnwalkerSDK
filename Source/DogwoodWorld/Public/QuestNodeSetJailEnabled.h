#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeSetJailEnabled.generated.h"

UCLASS(Blueprintable)
class DOGWOODWORLD_API UQuestNodeSetJailEnabled : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJailEnabled;
    
    UQuestNodeSetJailEnabled();

};

