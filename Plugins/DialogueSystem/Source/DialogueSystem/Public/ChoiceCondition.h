#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ChoiceCondition.generated.h"

UCLASS(Abstract, Blueprintable)
class DIALOGUESYSTEM_API UChoiceCondition : public UObject {
    GENERATED_BODY()
public:
    UChoiceCondition();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool EvaluateCondition(UObject* WorldContextObject) const;
    
};

