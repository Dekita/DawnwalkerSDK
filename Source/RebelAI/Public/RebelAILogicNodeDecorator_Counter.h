#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERebelAIIdentificationMode.h"
#include "ERebelAILogicNodeDecorator_Counter_CounterApplyMode.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_Counter.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_Counter : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIIdentificationMode CounterIdentificationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CounterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CounterTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AddedValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicNodeDecorator_Counter_CounterApplyMode CounterApplyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGlobal;
    
    FRebelAILogicNodeDecorator_Counter();
};

