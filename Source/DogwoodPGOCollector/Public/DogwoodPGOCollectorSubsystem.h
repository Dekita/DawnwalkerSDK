#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DogwoodPGOCollectorSubsystem.generated.h"

class UWorld;

UCLASS(Blueprintable)
class DOGWOODPGOCOLLECTOR_API UDogwoodPGOCollectorSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* CurrentWorld;
    
    UDogwoodPGOCollectorSubsystem();

};

