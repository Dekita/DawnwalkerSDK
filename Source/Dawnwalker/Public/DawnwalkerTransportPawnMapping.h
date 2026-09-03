#pragma once
#include "CoreMinimal.h"
#include "TransportMappinSource.h"
#include "DawnwalkerSelectedTransportActor.h"
#include "DawnwalkerTransportPawnMapping.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UDawnwalkerTransportPawnMapping : public UTransportMappinSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerSelectedTransportActor SelectedActor;
    
public:
    UDawnwalkerTransportPawnMapping();

};

