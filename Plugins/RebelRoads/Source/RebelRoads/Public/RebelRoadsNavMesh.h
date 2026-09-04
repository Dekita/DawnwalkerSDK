#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "RebelRoadsNavMesh.generated.h"

UCLASS(Blueprintable)
class REBELROADS_API ARebelRoadsNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    ARebelRoadsNavMesh(const FObjectInitializer& ObjectInitializer);

};

