#include "CommunityDebugTabWidget.h"

UCommunityDebugTabWidget::UCommunityDebugTabWidget() {
    this->TabName = FText::FromString(TEXT("Community System"));
    this->StubDebugMode = EStubDebugMode::WhenThePanelIsShown;
    this->bPanelShown = false;
}

void UCommunityDebugTabWidget::UpdateStubDebug() {
}

void UCommunityDebugTabWidget::SetTimeOfDay(const FDayTime& Time) {
}

void UCommunityDebugTabWidget::ScheduleRefresh() {
}



FDayTime UCommunityDebugTabWidget::GetTimeOfDay() {
    return FDayTime{};
}

TArray<UCommunityBaseDebug*> UCommunityDebugTabWidget::GetAllFiles() {
    return TArray<UCommunityBaseDebug*>();
}

TArray<UObject*> UCommunityDebugTabWidget::GetAllChildren(UObject* Object) {
    return TArray<UObject*>();
}


