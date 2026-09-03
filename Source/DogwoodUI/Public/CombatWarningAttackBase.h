#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CombatWarningAttackBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCombatWarningAttackBase : public UUserWidget {
    GENERATED_BODY()
public:
    UCombatWarningAttackBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShouldShowWarning(bool bIsActive);
    
};

