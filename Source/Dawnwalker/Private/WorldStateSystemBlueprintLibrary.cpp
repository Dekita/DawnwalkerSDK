#include "WorldStateSystemBlueprintLibrary.h"

UWorldStateSystemBlueprintLibrary::UWorldStateSystemBlueprintLibrary() {
}

bool UWorldStateSystemBlueprintLibrary::WasWeatherSetFromQuestNode(UWorldStateSystemInterface* WorldStateSystemInterface) {
    return false;
}

void UWorldStateSystemBlueprintLibrary::SaveActorOnSplineLocation(UWorldStateSystemInterface* WorldStateSystemInterface, FGuid PersistentActorGuid, int32 CurrentPointIndex, float Alpha) {
}

bool UWorldStateSystemBlueprintLibrary::LoadActorOnSplineLocation(UWorldStateSystemInterface* WorldStateSystemInterface, const FGuid& PersistentActorGuid, int32& CurrentPointIndex, float& Alpha) {
    return false;
}

USkyCreatorWeatherPreset* UWorldStateSystemBlueprintLibrary::GetWeatherPreset(UWorldStateSystemInterface* WorldStateSystemInterface) {
    return NULL;
}

float UWorldStateSystemBlueprintLibrary::GetFogTargetHeight(UWorldStateSystemInterface* WorldStateSystemInterface) {
    return 0.0f;
}

float UWorldStateSystemBlueprintLibrary::GetFogMinHeight(UWorldStateSystemInterface* WorldStateSystemInterface) {
    return 0.0f;
}


