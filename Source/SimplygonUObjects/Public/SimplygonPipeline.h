#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SimplygonPipeline.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonPipeline : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseLODIndex;
    
    USimplygonPipeline();

};

