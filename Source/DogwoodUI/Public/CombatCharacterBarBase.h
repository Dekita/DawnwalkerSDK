#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CombatCharacterBarBase.generated.h"

class UCombatComponentBase;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCombatCharacterBarBase : public UUserWidget {
    GENERATED_BODY()
public:
    UCombatCharacterBarBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTarget(UCombatComponentBase* InTarget);
    
};

