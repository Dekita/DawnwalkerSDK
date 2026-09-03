#pragma once
#include "CoreMinimal.h"
#include "NodeMetrics.h"
#include "ResponseNodeMetrics.generated.h"

USTRUCT(BlueprintType)
struct DIALOGUESYSTEM_API FResponseNodeMetrics : public FNodeMetrics {
    GENERATED_BODY()
public:
    FResponseNodeMetrics();
};

