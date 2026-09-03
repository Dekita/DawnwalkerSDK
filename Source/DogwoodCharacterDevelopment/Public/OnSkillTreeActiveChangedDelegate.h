#pragma once
#include "CoreMinimal.h"
#include "ECharacterDevelopmentMode.h"
#include "OnSkillTreeActiveChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnSkillTreeActiveChanged, const ECharacterDevelopmentMode, SkillTree, const bool, bActive);

