#include "GenericBlueprintFunctionLibrary.h"

UGenericBlueprintFunctionLibrary::UGenericBlueprintFunctionLibrary() {
}

void UGenericBlueprintFunctionLibrary::WorldDistanceToText(const double& InDistance, FText& OutText) {
}

void UGenericBlueprintFunctionLibrary::SetDisplayGamma(float InGamma) {
}

int32 UGenericBlueprintFunctionLibrary::GetNetCompatibleChangelist() {
    return 0;
}

float UGenericBlueprintFunctionLibrary::GetDisplayGamma() {
    return 0.0f;
}

FLinearColor UGenericBlueprintFunctionLibrary::ConvertSRGBToLinear(const FLinearColor& InColor) {
    return FLinearColor{};
}

FLinearColor UGenericBlueprintFunctionLibrary::ConvertLinearToSRGB(const FLinearColor& InColor) {
    return FLinearColor{};
}


