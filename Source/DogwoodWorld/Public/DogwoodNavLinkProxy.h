#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "DogwoodNavLinkProxy.generated.h"

UCLASS(Blueprintable)
class DOGWOODWORLD_API ADogwoodNavLinkProxy : public ANavLinkProxy {
    GENERATED_BODY()
public:
    ADogwoodNavLinkProxy(const FObjectInitializer& ObjectInitializer);

};

