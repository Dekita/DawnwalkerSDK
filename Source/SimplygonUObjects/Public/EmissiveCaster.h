#pragma once
#include "CoreMinimal.h"
#include "BaseColorCaster.h"
#include "EmissiveCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UEmissiveCaster : public UBaseColorCaster {
    GENERATED_BODY()
public:
    UEmissiveCaster();

};

