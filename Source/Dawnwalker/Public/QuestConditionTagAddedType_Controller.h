#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionTagAddedType_Controller.generated.h"

class AActor;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionTagAddedType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ObservedActor;
    
public:
    UQuestConditionTagAddedType_Controller();

};

