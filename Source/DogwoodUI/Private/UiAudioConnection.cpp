#include "UiAudioConnection.h"

FUiAudioConnection::FUiAudioConnection() {
    this->UiAudioCategory = EUIAudioCategory::None;
    this->WidgetType = EUIAudioWidgetType::None;
    this->WidgetAction = EUIAudioWidgetAction::None;
    this->WidgetContext = EUIAudioWidgetContext::None;
    this->ItemMaterialSound = EItemMaterialType::None;
    this->AbilitySound = EAbilityCategory::None;
    this->AudioEvent = NULL;
}

