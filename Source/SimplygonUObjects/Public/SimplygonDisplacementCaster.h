#pragma once
#include "CoreMinimal.h"
#include "DisplacementCasterSettings.h"
#include "SimplygonMaterialCaster.h"
#include "SimplygonDisplacementCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonDisplacementCaster : public USimplygonMaterialCaster {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDisplacementCasterSettings DisplacementCasterSettings;
    
    USimplygonDisplacementCaster();

};

