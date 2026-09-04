#pragma once
#include "CoreMinimal.h"
#include "RebelAITest_MultilineString.generated.h"

USTRUCT(BlueprintType)
struct FRebelAITest_MultilineString {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Result;
    
    REBELAI_API FRebelAITest_MultilineString();
};

