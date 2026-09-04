#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SyncedAnimationSpot.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable)
class REBELAI_API ASyncedAnimationSpot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* TargetSpot;
    
    ASyncedAnimationSpot(const FObjectInitializer& ObjectInitializer);

};

