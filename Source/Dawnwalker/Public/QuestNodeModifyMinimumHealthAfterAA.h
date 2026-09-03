#pragma once
#include "CoreMinimal.h"
#include "QuestNodeActionBase.h"
#include "QuestNodeModifyMinimumHealthAfterAA.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UQuestNodeModifyMinimumHealthAfterAA : public UQuestNodeActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetNewValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumHealthPercentageAfterAACast;
    
public:
    UQuestNodeModifyMinimumHealthAfterAA();

};

