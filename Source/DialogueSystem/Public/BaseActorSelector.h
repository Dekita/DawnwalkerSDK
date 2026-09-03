#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CinematicGenerationInterface.h"
#include "CinematicSpawnInterface.h"
#include "BaseActorSelector.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class DIALOGUESYSTEM_API UBaseActorSelector : public UObject, public ICinematicSpawnInterface, public ICinematicGenerationInterface {
    GENERATED_BODY()
public:
    UBaseActorSelector();


    // Fix for true pure virtual functions not being implemented
};

