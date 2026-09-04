#pragma once
#include "CoreMinimal.h"
#include "StateTreeInstanceData.h"
#include "StateTreeReference.h"
#include "RebelAIService.h"
#include "RebelAIService_StateTree.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIService_StateTree : public FRebelAIService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTreeReference StateTreeRef;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FStateTreeInstanceData StateTreeInstanceData;
    
public:
    FRebelAIService_StateTree();
};

