#pragma once
#include "CoreMinimal.h"
#include "DWActivatableWidget.h"
#include "Templates/SubclassOf.h"
#include "CombatNotificationsWidget.generated.h"

class UDamageNotificationWidget;
class URebelAIStub;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCombatNotificationsWidget : public UDWActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageNotificationWidget> DamageNotificationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UDamageNotificationWidget*> WidgetCache;
    
public:
    UCombatNotificationsWidget();

private:
    UFUNCTION(BlueprintCallable)
    void OnEnemyUnregistered(const URebelAIStub* Attacker, const URebelAIStub* Defender);
    
    UFUNCTION(BlueprintCallable)
    void OnEnemyRegistered(const URebelAIStub* Attacker, const URebelAIStub* Defender);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageWidgetExpired(UDamageNotificationWidget* Widget);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddWidgetToScreen(UDamageNotificationWidget* Widget);
    
};

