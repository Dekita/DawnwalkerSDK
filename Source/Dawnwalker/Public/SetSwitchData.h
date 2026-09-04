#pragma once
#include "CoreMinimal.h"
#include "ActorReference.h"
#include "SetSwitchData.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FSetSwitchData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorReference Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwitchGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SwitchState;
    
    FSetSwitchData();
};

