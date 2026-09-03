#pragma once
#include "CoreMinimal.h"
#include "QuestNodeController.h"
#include "QuestNodeChooseChickenTest_Controller.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeChooseChickenTest_Controller : public UQuestNodeController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutputToCall;
    
public:
    UQuestNodeChooseChickenTest_Controller();

};

