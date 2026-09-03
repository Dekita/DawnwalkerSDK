#pragma once
#include "CoreMinimal.h"
#include "AkRoomComponent.h"
#include "RWRoomComponent.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class WWISEEXTENSIONS_API URWRoomComponent : public UAkRoomComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> OnEnterEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> OnExitEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkSwitchValue*> OnEnterSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkSwitchValue*> OnExitSwitches;
    
    URWRoomComponent(const FObjectInitializer& ObjectInitializer);

};

