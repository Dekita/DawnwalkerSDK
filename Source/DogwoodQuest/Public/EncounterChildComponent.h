#pragma once
#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "EncounterChildComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODQUEST_API UEncounterChildComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActor;
    
public:
    UEncounterChildComponent(const FObjectInitializer& ObjectInitializer);

};

