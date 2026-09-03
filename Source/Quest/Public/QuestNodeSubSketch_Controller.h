#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestNodeSubSketch_Controller.generated.h"

class UQuestSketch;

UCLASS(Blueprintable)
class QUEST_API UQuestNodeSubSketch_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* GeneratedClassObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UQuestSketch> RuntimeInstance;
    
public:
    UQuestNodeSubSketch_Controller();

};

