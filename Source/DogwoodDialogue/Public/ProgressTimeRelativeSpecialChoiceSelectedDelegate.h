#pragma once
#include "CoreMinimal.h"
#include "QuestTimeProgressionTypeDefinition.h"
#include "ProgressTimeRelativeSpecialChoiceSelectedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FProgressTimeRelativeSpecialChoiceSelected, const FQuestTimeProgressionTypeDefinition&, Time);

