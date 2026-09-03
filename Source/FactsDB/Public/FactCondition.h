#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FactCondition.generated.h"

UCLASS(Blueprintable, HideDropdown)
class FACTSDB_API UFactCondition : public UObject {
    GENERATED_BODY()
public:
    UFactCondition();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckCondition(const FString& FactName, const int32 IntValue, bool& bOutCondition);
    
};

