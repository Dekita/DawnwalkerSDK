#include "CombatNotificationsWidget.h"

UCombatNotificationsWidget::UCombatNotificationsWidget() {
    this->DamageNotificationClass = NULL;
}

void UCombatNotificationsWidget::OnEnemyUnregistered(const URebelAIStub* Attacker, const URebelAIStub* Defender) {
}

void UCombatNotificationsWidget::OnEnemyRegistered(const URebelAIStub* Attacker, const URebelAIStub* Defender) {
}

void UCombatNotificationsWidget::OnDamageWidgetExpired(UDamageNotificationWidget* Widget) {
}



