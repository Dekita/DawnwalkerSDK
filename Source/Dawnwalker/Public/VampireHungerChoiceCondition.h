#pragma once
#include "CoreMinimal.h"
#include "ChoiceCondition.h"
#include "EVampireHunger.h"
#include "EVampireHungerCondition.h"
#include "VampireHungerChoiceCondition.generated.h"

UCLASS(Blueprintable)
class UVampireHungerChoiceCondition : public UChoiceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVampireHungerCondition Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVampireHunger RequiredHunger;
    
    UVampireHungerChoiceCondition();

};

