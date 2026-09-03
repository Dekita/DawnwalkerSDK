#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StaticBaseReference.h"
#include "ETransportReferenceType.h"
#include "DawnwalkerTransportReference.generated.h"

class ADawnwalkerTransportActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UDawnwalkerTransportReference : public UStaticBaseReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ADawnwalkerTransportActor> Transport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransportReferenceType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TransportGuid;
    
public:
    UDawnwalkerTransportReference();

};

