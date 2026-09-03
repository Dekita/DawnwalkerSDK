#pragma once
#include "CoreMinimal.h"
#include "RebelRoadsNavMesh.h"
#include "DogwoodNavMesh.generated.h"

UCLASS(Blueprintable)
class DOGWOODAI_API ADogwoodNavMesh : public ARebelRoadsNavMesh {
    GENERATED_BODY()
public:
    ADogwoodNavMesh(const FObjectInitializer& ObjectInitializer);

};

