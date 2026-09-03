#pragma once
#include "CoreMinimal.h"
#include "ChoiceCondition.h"
#include "EItemConditionType.h"
#include "ItemChoiceCondition.generated.h"

class UItemBaseDataAsset;

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UItemChoiceCondition : public UChoiceCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemConditionType Condition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemBaseDataAsset* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UItemBaseDataAsset*, int32> Items;
    
    UItemChoiceCondition();

};

