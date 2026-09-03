#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "FactRequest.h"
#include "GameplayTagContainer.h"
#include "EConditionCheckType.h"
#include "QuestConditionFactIntType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionFactIntType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFactRequest Fact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionCheckType Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
public:
    UQuestConditionFactIntType();

protected:
    UFUNCTION(BlueprintCallable)
    void ObservedFactChanged(FGameplayTag& FactName, bool BoolValue, int32 IntValue, float FloatValue);
    
};

