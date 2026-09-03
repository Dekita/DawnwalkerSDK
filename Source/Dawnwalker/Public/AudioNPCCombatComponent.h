#pragma once
#include "CoreMinimal.h"
#include "AudioCharacterCombatComponentBase.h"
#include "AudioNPCCombatComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UAudioNPCCombatComponent : public UAudioCharacterCombatComponentBase {
    GENERATED_BODY()
public:
    UAudioNPCCombatComponent(const FObjectInitializer& ObjectInitializer);

};

