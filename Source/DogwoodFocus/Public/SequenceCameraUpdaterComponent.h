#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SequenceCameraUpdaterComponent.generated.h"

class UFocusAbilitiesSubsystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODFOCUS_API USequenceCameraUpdaterComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFocusAbilitiesSubsystem* FocusAbilitiesSubsystem;
    
public:
    USequenceCameraUpdaterComponent(const FObjectInitializer& ObjectInitializer);

};

