#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeEndNecrospeak.generated.h"

class UNecrospeakConfig;

UCLASS(Blueprintable)
class DOGWOODWORLD_API UQuestNodeEndNecrospeak : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNecrospeakConfig* NecrospeakConfig;
    
public:
    UQuestNodeEndNecrospeak();

};

