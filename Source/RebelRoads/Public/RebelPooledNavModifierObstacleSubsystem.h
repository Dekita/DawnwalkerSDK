#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "RebelPooledNavModifierObstacleSubsystem.generated.h"

class AActor;
class ARebelPooledNavModifierObstacle;

UCLASS(Blueprintable)
class REBELROADS_API URebelPooledNavModifierObstacleSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ModifierActorClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ARebelPooledNavModifierObstacle*> Pool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ARebelPooledNavModifierObstacle*> InUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ARebelPooledNavModifierObstacle*> PendingActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ARebelPooledNavModifierObstacle*> PendingDeactivation;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<AActor>, ARebelPooledNavModifierObstacle*> ModifierMap;
    
public:
    URebelPooledNavModifierObstacleSubsystem();

};

