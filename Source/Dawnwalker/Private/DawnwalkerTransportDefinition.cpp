#include "DawnwalkerTransportDefinition.h"

UDawnwalkerTransportDefinition::UDawnwalkerTransportDefinition() {
    this->GroupDefinition = NULL;
    this->TransportDefinition = NULL;
    this->bBasedOnAlertLevel = false;
    this->TransportGuardAreaSize = 1000.00f;
    this->TransportAggressionAreaSize = 500.00f;
    this->TransportCombatArea = 2000.00f;
    this->bRemovePawnsOnDefeat = false;
    this->bResetTransportAfterDefeat = false;
    this->ResetAfterTime = 0;
    this->TransportActiveCombatAreaSize = -1.00f;
}


