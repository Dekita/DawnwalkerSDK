#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "NotificationReceiver.h"
#include "Templates/SubclassOf.h"
#include "NotificationToastPanel.generated.h"

class UNotificationWidget;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UNotificationToastPanel : public UUserWidget, public INotificationReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNotificationWidget> ToastWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNotificationWidget*> ToastWidgetPool;
    
public:
    UNotificationToastPanel();

protected:
    UFUNCTION(BlueprintCallable)
    void OnNotificationWidgetHidden(UNotificationWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    UNotificationWidget* GetToastWidgetFromPool();
    

    // Fix for true pure virtual functions not being implemented
};

