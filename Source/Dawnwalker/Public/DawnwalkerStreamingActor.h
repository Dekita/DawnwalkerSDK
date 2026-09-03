#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DawnwalkerStreamingActor.generated.h"

class UWorldPartitionStreamingSourceComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API ADawnwalkerStreamingActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldPartitionStreamingSourceComponent* StreamingSource;
    
public:
    ADawnwalkerStreamingActor(const FObjectInitializer& ObjectInitializer);

};

