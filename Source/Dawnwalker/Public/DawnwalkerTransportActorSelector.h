#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseActorSelector.h"
#include "DawnwalkerSelectedTransportActor.h"
#include "DawnwalkerTransportActorSelector.generated.h"

class ADawnwalkerTransportActor;

UCLASS(Blueprintable, EditInlineNew)
class DAWNWALKER_API UDawnwalkerTransportActorSelector : public UBaseActorSelector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ADawnwalkerTransportActor> Transport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TransportRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerSelectedTransportActor SelectedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TransportGuid;
    
public:
    UDawnwalkerTransportActorSelector();

};

