#pragma once
#include "CoreMinimal.h"
#include "DWActivatableWidget.h"
#include "CreditsWindowBase.generated.h"

class UCreditsData;
class UCreditsRollingWidget;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCreditsWindowBase : public UDWActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCreditsRollingWidget* RollingWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreditsData* CreditsData;
    
public:
    UCreditsWindowBase();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCreditsReady();
    
};

