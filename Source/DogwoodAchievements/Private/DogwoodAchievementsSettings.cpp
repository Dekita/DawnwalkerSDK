#include "DogwoodAchievementsSettings.h"

UDogwoodAchievementsSettings::UDogwoodAchievementsSettings() {
    this->SelfishItems.AddDefaulted(3);
    this->SelfishMerchantTags.AddDefaulted(1);
    this->ValleyTrotterObjectiveTags.AddDefaulted(4);
    this->BigCityLivingObjectiveTags.AddDefaulted(1);
    this->DeliveryDelayObjectiveTags.AddDefaulted(10);
    this->GoldenEquipmentSlots.AddDefaulted(8);
    this->InvalidAchievementId = TEXT("ACH_INVALID");
}


