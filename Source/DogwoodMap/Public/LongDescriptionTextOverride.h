#pragma once
#include "CoreMinimal.h"
#include "OpenWorldMappinAdditionalInfo.h"
#include "LongDescriptionTextOverride.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULongDescriptionTextOverride : public UOpenWorldMappinAdditionalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LongDescriptionOverride;
    
    ULongDescriptionTextOverride();

};

