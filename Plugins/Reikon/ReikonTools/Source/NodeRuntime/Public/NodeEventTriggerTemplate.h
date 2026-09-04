#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NodeEventTemplateBase.h"
#include "NodeEventTriggerTemplate.generated.h"

USTRUCT(BlueprintType)
struct FNodeEventTriggerTemplate : public FNodeEventTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> EventTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> EventNames;
    
    NODERUNTIME_API FNodeEventTriggerTemplate();
};

