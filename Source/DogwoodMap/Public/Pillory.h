#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mappinable.h"
#include "Pillory.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API APillory : public AMappinable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform DestinationPoint;
    
    APillory(const FObjectInitializer& ObjectInitializer);

};

