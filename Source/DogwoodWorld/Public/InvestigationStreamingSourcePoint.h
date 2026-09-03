#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InvestigationStreamingSourcePoint.generated.h"

class UWorldPartitionStreamingSourceComponent;

UCLASS(Blueprintable)
class DOGWOODWORLD_API AInvestigationStreamingSourcePoint : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldPartitionStreamingSourceComponent* StreamingSourceComponent;
    
public:
    AInvestigationStreamingSourcePoint(const FObjectInitializer& ObjectInitializer);

};

