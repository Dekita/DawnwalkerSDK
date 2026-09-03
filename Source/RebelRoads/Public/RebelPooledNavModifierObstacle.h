#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RebelPooledNavModifierObstacle.generated.h"

class URebelPooledNavModifierObstacleComponent;

UCLASS(Blueprintable, NotPlaceable)
class REBELROADS_API ARebelPooledNavModifierObstacle : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelPooledNavModifierObstacleComponent* NavModifierComponent;
    
    ARebelPooledNavModifierObstacle(const FObjectInitializer& ObjectInitializer);

};

