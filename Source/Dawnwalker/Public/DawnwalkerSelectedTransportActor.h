#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerSelectedTransportActor.generated.h"

class UDawnwalkerTransportDefinition;

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerSelectedTransportActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDawnwalkerTransportDefinition> TransportDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedType;
    
    FDawnwalkerSelectedTransportActor();
};

