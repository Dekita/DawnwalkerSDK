#pragma once
#include "CoreMinimal.h"
#include "StateTreeExecutionTypes.h"
#include "RebelAIStateTreeSchema.h"
#include "Templates/SubclassOf.h"
#include "RebelAIStateTreeSchema_AIStub.generated.h"

class URebelAIStub;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class REBELAI_API URebelAIStateTreeSchema_AIStub : public URebelAIStateTreeSchema {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<URebelAIStub> RebelAIStubClass;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStateTreeExternalDataDesc> ContextDataDescs;
    
public:
    URebelAIStateTreeSchema_AIStub();

};

