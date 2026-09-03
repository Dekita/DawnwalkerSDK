#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StructUtils/PropertyBag.h"
#include "RebelAIParamContainerReference.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIParamContainerReference {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag Parameters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> PropertyOverrides;
    
public:
    FRebelAIParamContainerReference();
};

