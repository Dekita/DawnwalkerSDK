#include "DWBlueprintFunctionLibrary.h"

UDWBlueprintFunctionLibrary::UDWBlueprintFunctionLibrary() {
}

void UDWBlueprintFunctionLibrary::ToggleTorch(ADawnwalkerCharacterBase* TorchOwner) {
}

void UDWBlueprintFunctionLibrary::SetVoiceOverLanguage(const FString& Culture, UObject* WorldContextObject) {
}

void UDWBlueprintFunctionLibrary::SetCulture(const FString& Culture) {
}

void UDWBlueprintFunctionLibrary::LogWarning(const FString& Message) {
}

void UDWBlueprintFunctionLibrary::LogError(const FString& Message) {
}

void UDWBlueprintFunctionLibrary::log(const FString& Message) {
}

bool UDWBlueprintFunctionLibrary::IsHealthBarDisplayedOverActor(const AActor* Actor) {
    return false;
}

bool UDWBlueprintFunctionLibrary::HasTorch(const ADawnwalkerCharacterBase* TorchOwner) {
    return false;
}

FString UDWBlueprintFunctionLibrary::GetVoiceOverLanguage() {
    return TEXT("");
}

TArray<FName> UDWBlueprintFunctionLibrary::GetSupportedVoiceOverLanguages() {
    return TArray<FName>();
}

int32 UDWBlueprintFunctionLibrary::GetQuestLevelDeltaToPlayer(const UObject* InWorldContext, const UQuest* TargetQuest) {
    return 0;
}

int32 UDWBlueprintFunctionLibrary::GetLevelDeltaToPlayer(const UObject* InWorldContext, int32 Level) {
    return 0;
}

FSlateBrush UDWBlueprintFunctionLibrary::GetKeyIcon(const UObject* InWorldContext, const FKey& Key, const uint8 DirectionMask, bool bCheckAllAvailableSets) {
    return FSlateBrush{};
}

FSlateBrush UDWBlueprintFunctionLibrary::GetInputActionIcon(const UObject* InWorldContext, const UInputAction* InputAction, const uint8 DirectionMask, bool bCheckAllAvailableSets) {
    return FSlateBrush{};
}

FString UDWBlueprintFunctionLibrary::GetCulture() {
    return TEXT("");
}

bool UDWBlueprintFunctionLibrary::FindPointBehindTPPCamera(UCameraComponent* Camera, AActor* CameraTarget, FVector& Result, float DistanceBehindCamera) {
    return false;
}

void UDWBlueprintFunctionLibrary::EnableTorch(ADawnwalkerCharacterBase* TorchOwner, bool bEnable) {
}

bool UDWBlueprintFunctionLibrary::CanRespawnPlayerDebug() {
    return false;
}


