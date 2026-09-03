#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "AudioSystemInterface.generated.h"

class UAudioCharacterBaseDataAsset;

UCLASS(Abstract, Blueprintable)
class DAWNWALKER_API UAudioSystemInterface : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioCharacterBaseDataAsset* AudioCharacterDataAsset;
    
public:
    UAudioSystemInterface();

};

