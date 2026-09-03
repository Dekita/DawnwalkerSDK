#pragma once
#include "CoreMinimal.h"
#include "Mappinable.h"
#include "House.generated.h"

UCLASS(Blueprintable)
class DOGWOODMAP_API AHouse : public AMappinable {
    GENERATED_BODY()
public:
    AHouse(const FObjectInitializer& ObjectInitializer);

};

