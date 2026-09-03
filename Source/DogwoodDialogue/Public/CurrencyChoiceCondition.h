#pragma once
#include "CoreMinimal.h"
#include "ChoiceCondition.h"
#include "ECurrencyType.h"
#include "CurrencyChoiceCondition.generated.h"

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UCurrencyChoiceCondition : public UChoiceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurrencyType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UCurrencyChoiceCondition();

};

