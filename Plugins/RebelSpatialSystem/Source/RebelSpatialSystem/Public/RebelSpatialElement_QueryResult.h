#pragma once
#include "CoreMinimal.h"
#include "RebelSpatialElement_Standalone.h"
#include "RebelSpatialElement_QueryResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct REBELSPATIALSYSTEM_API FRebelSpatialElement_QueryResult : public FRebelSpatialElement_Standalone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    FRebelSpatialElement_QueryResult();
};

