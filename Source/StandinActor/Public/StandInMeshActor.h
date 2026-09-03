#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StandInMeshActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, NotPlaceable)
class STANDINACTOR_API AStandInMeshActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    AStandInMeshActor(const FObjectInitializer& ObjectInitializer);

};

