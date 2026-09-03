#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMappinState.h"
#include "EMappinType.h"
#include "QuestConditionType.h"
#include "QuestConditionMappinVisibilityType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionMappinVisibilityType : public UQuestConditionType {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMappinType MappinType;
    
public:
    UQuestConditionMappinVisibilityType();

    UFUNCTION()
    void OnMappinAddedToCompass(int64 ID, EMappinType Type, EMappinState State, bool bEnabled, FVector Location);
    
};

