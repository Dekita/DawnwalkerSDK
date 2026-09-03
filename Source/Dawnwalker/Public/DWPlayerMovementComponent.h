#pragma once
#include "CoreMinimal.h"
#include "DawnwalkerCharacterMovement.h"
#include "DWPlayerMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UDWPlayerMovementComponent : public UDawnwalkerCharacterMovement {
    GENERATED_BODY()
public:
    UDWPlayerMovementComponent(const FObjectInitializer& ObjectInitializer);

};

