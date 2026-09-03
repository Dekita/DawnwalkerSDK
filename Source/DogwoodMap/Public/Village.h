#pragma once
#include "CoreMinimal.h"
#include "Mappinable.h"
#include "Village.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API AVillage : public AMappinable {
    GENERATED_BODY()
public:
    AVillage(const FObjectInitializer& ObjectInitializer);

};

