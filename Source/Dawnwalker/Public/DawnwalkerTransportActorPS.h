#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerTransportActorPS.generated.h"

class UDawnwalkerTransportSubsystem;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerTransportActorPS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDawnwalkerTransportSubsystem* Subsystem;
    
    FDawnwalkerTransportActorPS();
};

