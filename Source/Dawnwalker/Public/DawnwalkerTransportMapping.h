#pragma once
#include "CoreMinimal.h"
#include "TransportMappinSource.h"
#include "DawnwalkerTransportMapping.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UDawnwalkerTransportMapping : public UTransportMappinSource {
    GENERATED_BODY()
public:
    UDawnwalkerTransportMapping();

};

