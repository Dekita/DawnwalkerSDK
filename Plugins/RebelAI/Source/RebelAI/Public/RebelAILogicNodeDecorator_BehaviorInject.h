#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNodeDecorator_BehaviorInject_Mode.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_BehaviorInject.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_BehaviorInject : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicNodeDecorator_BehaviorInject_Mode InjectMode;
    
    FRebelAILogicNodeDecorator_BehaviorInject();
};

