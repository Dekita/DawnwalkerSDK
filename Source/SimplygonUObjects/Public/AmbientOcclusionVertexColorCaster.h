#pragma once
#include "CoreMinimal.h"
#include "BaseColorVertexColorCaster.h"
#include "AmbientOcclusionVertexColorCaster.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API UAmbientOcclusionVertexColorCaster : public UBaseColorVertexColorCaster {
    GENERATED_BODY()
public:
    UAmbientOcclusionVertexColorCaster();

};

