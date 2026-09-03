#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerStaminaBar.generated.h"

class UStatBarBase;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UPlayerStaminaBar : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStatBarBase* StaminaBar;
    
    UPlayerStaminaBar();

};

