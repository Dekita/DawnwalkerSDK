#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelAIParams.h"
#include "RebelAIParams_Defense.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParams_Defense : public FRebelAIParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange Range;
    
    FRebelAIParams_Defense();
};

