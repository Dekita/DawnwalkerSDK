#pragma once
#include "CoreMinimal.h"
#include "AlertLevelChangeInfo.h"
#include "EConditionCheckType.h"
#include "PopulationAreaConditionType.h"
#include "EAlertStage.h"
#include "BrencisAlertLevelPopulationAreaConditionType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UBrencisAlertLevelPopulationAreaConditionType : public UPopulationAreaConditionType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertStage AlertStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionCheckType Condition;
    
    UBrencisAlertLevelPopulationAreaConditionType();

protected:
    UFUNCTION(BlueprintCallable)
    void OnAlertLevelChanged(FAlertLevelChangeInfo AlertLevelChange);
    
};

