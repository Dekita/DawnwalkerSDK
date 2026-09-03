#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "QuestConditionType.h"
#include "QuestConditionItemUsedType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionItemUsedType : public UQuestConditionType {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct ItemFilter;
    
public:
    UQuestConditionItemUsedType();

};

