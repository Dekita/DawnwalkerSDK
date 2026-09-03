#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestConditionDistanceType_Controller.generated.h"

class AActor;

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestConditionDistanceType_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ObservedActorRef1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> ObservedActorRef2;
    
public:
    UQuestConditionDistanceType_Controller();

};

