#pragma once
#include "CoreMinimal.h"
#include "BaseColorVertexColorCaster.h"
#include "OpacityMaskVertexColorCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UOpacityMaskVertexColorCaster : public UBaseColorVertexColorCaster {
    GENERATED_BODY()
public:
    UOpacityMaskVertexColorCaster();

};

