#pragma once
#include "CoreMinimal.h"
#include "StreamingEntry.generated.h"

class ADawnwalkerStreamingActor;

USTRUCT(BlueprintType)
struct FStreamingEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADawnwalkerStreamingActor* StreamingActor;
    
    DAWNWALKER_API FStreamingEntry();
};

