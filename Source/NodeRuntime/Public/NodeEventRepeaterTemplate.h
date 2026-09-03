#pragma once
#include "CoreMinimal.h"
#include "NodeEventTemplateBase.h"
#include "NodeEventRepeaterTemplate.generated.h"

USTRUCT(BlueprintType)
struct NODERUNTIME_API FNodeEventRepeaterTemplate : public FNodeEventTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    FNodeEventRepeaterTemplate();
};

