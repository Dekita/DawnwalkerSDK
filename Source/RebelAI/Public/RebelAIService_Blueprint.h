#pragma once
#include "CoreMinimal.h"
#include "RebelAIBlueprintReference.h"
#include "RebelAIService.h"
#include "RebelAIService_Blueprint.generated.h"

class URebelAIServiceBlueprintBase;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIService_Blueprint : public FRebelAIService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelAIBlueprintReference BlueprintRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIServiceBlueprintBase* Blueprint;
    
public:
    FRebelAIService_Blueprint();
};

