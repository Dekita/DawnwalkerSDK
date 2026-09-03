#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "DamageNotificationWidget.generated.h"

class UDamageNotificationWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class DOGWOODUI_API UDamageNotificationWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotificationExpired, UDamageNotificationWidget*, Widget);
    
    UPROPERTY(BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNotificationExpired OnNotificationExpired;
    
    UDamageNotificationWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowDamageNotification(float Value, FVector WorldPosition, bool IsCritical);
    
};

