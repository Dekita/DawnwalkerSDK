#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RebelCollisionDetectorInterface.h"
#include "RebelBypassingCharacter.generated.h"

UCLASS(Blueprintable)
class REBELBYPASSING_API URebelBypassingCharacter : public UObject, public IRebelCollisionDetectorInterface {
    GENERATED_BODY()
public:
    URebelBypassingCharacter();


    // Fix for true pure virtual functions not being implemented
};

