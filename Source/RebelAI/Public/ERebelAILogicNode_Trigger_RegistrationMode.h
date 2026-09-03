#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNode_Trigger_RegistrationMode.generated.h"

UENUM(BlueprintType)
enum class ERebelAILogicNode_Trigger_RegistrationMode : uint8 {
    ByParentBehavior,
    SelfRegisteredTask,
};

