#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicTree_CoroutineScope.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_Coroutine.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_Coroutine : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicTree_CoroutineScope CoroutineScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScopeName;
    
    FRebelAILogicNodeDecorator_Coroutine();
};

