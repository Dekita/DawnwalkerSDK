#pragma once
#include "CoreMinimal.h"
#include "EventSequenceExecutionTokenData.generated.h"

class UMovieSceneSection;

USTRUCT(BlueprintType)
struct FEventSequenceExecutionTokenData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneSection* Section;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFireEvent;
    
    NODERUNTIME_API FEventSequenceExecutionTokenData();
};

