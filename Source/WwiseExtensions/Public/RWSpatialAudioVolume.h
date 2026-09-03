#pragma once
#include "CoreMinimal.h"
#include "AkSpatialAudioVolume.h"
#include "RWSpatialAudioVolume.generated.h"

class URWRoomComponent;

UCLASS(Blueprintable)
class WWISEEXTENSIONS_API ARWSpatialAudioVolume : public AAkSpatialAudioVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URWRoomComponent* RWRoom;
    
    ARWSpatialAudioVolume(const FObjectInitializer& ObjectInitializer);

};

