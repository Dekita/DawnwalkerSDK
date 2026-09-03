#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SPCRJointDynamicsRuntimeSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class SPCRJOINTDYNAMICS_API USPCRJointDynamicsRuntimeSettings : public UObject {
    GENERATED_BODY()
public:
    USPCRJointDynamicsRuntimeSettings();

};

