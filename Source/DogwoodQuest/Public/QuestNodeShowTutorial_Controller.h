#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestNodeShowTutorial_Controller.generated.h"

UCLASS(Blueprintable)
class DOGWOODQUEST_API UQuestNodeShowTutorial_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
    UQuestNodeShowTutorial_Controller();

    UFUNCTION()
    void OnTutorialConfirmed(const int64 RequestID);
    
    UFUNCTION()
    void OnTutorialClosed(const int64 RequestID);
    
};

