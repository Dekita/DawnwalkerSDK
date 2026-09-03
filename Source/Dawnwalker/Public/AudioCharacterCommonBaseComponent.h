#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AudioCharacterCommonBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UAudioCharacterCommonBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAudioCharacterCommonBaseComponent(const FObjectInitializer& ObjectInitializer);

};

