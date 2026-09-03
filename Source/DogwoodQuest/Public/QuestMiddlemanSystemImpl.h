#pragma once
#include "CoreMinimal.h"
#include "QuestMiddlemanSystemInterface.h"
#include "QuestMiddlemanSystemImpl.generated.h"

class AActor;

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestMiddlemanSystemImpl : public UQuestMiddlemanSystemInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AActor*> ActorsWithActiveTriggerNotice;
    
public:
    UQuestMiddlemanSystemImpl();

};

