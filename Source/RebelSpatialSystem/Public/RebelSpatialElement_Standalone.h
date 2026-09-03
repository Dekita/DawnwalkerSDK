#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RebelSpatialElement.h"
#include "RebelSpatialElement_Standalone.generated.h"

class URebelSpatialElementDefinition;

USTRUCT(BlueprintType)
struct REBELSPATIALSYSTEM_API FRebelSpatialElement_Standalone : public FRebelSpatialElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelSpatialElementDefinition* Definition;
    
    FRebelSpatialElement_Standalone();
};

