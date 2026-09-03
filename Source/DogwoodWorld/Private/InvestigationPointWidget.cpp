#include "InvestigationPointWidget.h"

UInvestigationPointWidget::UInvestigationPointWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PointDataIndex = 0;
    this->TargetingPercentage = 0.00f;
    this->State = EInvestigationPointWidgetState::Default;
    this->MinAlpha = 0.20f;
    this->ParentInvestigationComponent = NULL;
}




FInvestigationPointData UInvestigationPointWidget::GetPointData() {
    return FInvestigationPointData{};
}


