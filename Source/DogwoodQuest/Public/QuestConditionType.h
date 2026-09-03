#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QuestWaitableInterface.h"
#include "QuestConditionType.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class DOGWOODQUEST_API UQuestConditionType : public UObject, public IQuestWaitableInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConditionId;
    
public:
    UQuestConditionType();


    // Fix for true pure virtual functions not being implemented
};

