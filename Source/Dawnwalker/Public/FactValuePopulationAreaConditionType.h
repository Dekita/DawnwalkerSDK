#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EConditionCheckType.h"
#include "PopulationAreaConditionType.h"
#include "FactValuePopulationAreaConditionType.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UFactValuePopulationAreaConditionType : public UPopulationAreaConditionType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Fact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConditionCheckType Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UFactValuePopulationAreaConditionType();

protected:
    UFUNCTION(BlueprintCallable)
    void OnFactChanged(FGameplayTag& FactName, int32 IntValue);
    
};

