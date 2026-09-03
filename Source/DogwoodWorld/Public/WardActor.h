#pragma once
#include "CoreMinimal.h"
#include "RuneActor.h"
#include "WardActor.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODWORLD_API AWardActor : public ARuneActor {
    GENERATED_BODY()
public:
    AWardActor(const FObjectInitializer& ObjectInitializer);

};

