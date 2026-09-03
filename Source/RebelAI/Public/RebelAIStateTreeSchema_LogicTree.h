#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIStateTreeSchema_AIStub.h"
#include "RebelAIStateTreeSchema_LogicTree.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELAI_API URebelAIStateTreeSchema_LogicTree : public URebelAIStateTreeSchema_AIStub {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FGameplayTag LTServiceTag;
    
public:
    URebelAIStateTreeSchema_LogicTree();

};

