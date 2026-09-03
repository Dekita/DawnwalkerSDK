#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MappinSource.h"
#include "TransportMappinSource.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class QUEST_API UTransportMappinSource : public UMappinSource {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Transport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TransportSavedLocation;
    
public:
    UTransportMappinSource();

};

