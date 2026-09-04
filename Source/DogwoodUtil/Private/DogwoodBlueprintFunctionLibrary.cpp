#include "DogwoodBlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UDogwoodBlueprintFunctionLibrary::UDogwoodBlueprintFunctionLibrary() {
}

void UDogwoodBlueprintFunctionLibrary::WorldDistanceToText(const double& InDistance, FText& OutText) {
}

void UDogwoodBlueprintFunctionLibrary::UnlockAbilityOrChangeLevel(UAbilitySystemComponent* Component, const TSubclassOf<UGameplayAbility> AbilityClass, const int32 Level) {
}

void UDogwoodBlueprintFunctionLibrary::UnbindSequenceActors(FDWActorsBindingData& BindingData) {
}

FString UDogwoodBlueprintFunctionLibrary::StringToHumanReadable(const FString& DisplayName, bool bIsBool) {
    return TEXT("");
}

void UDogwoodBlueprintFunctionLibrary::SetComponentSelectable(UPrimitiveComponent* Component, bool bSelectable) {
}

FVector2D UDogwoodBlueprintFunctionLibrary::ProjectCircular2DInputToSquareGate(const FVector2D& Input) {
    return FVector2D{};
}

float UDogwoodBlueprintFunctionLibrary::K2_GetDistanceToNavMeshTileEdge(const FVector& InWorldCoordinate) {
    return 0.0f;
}

bool UDogwoodBlueprintFunctionLibrary::IsSubscribedDLC(EDogwoodDLCType InDLC) {
    return false;
}

bool UDogwoodBlueprintFunctionLibrary::IsSimulateInEditor() {
    return false;
}

bool UDogwoodBlueprintFunctionLibrary::IsShippingBuild() {
    return false;
}

bool UDogwoodBlueprintFunctionLibrary::IsGameRunning() {
    return false;
}

float UDogwoodBlueprintFunctionLibrary::GetValueFromCurveTableRowHandle(FCurveTableRowHandle Handle) {
    return 0.0f;
}

UGameplayEffectUIData* UDogwoodBlueprintFunctionLibrary::GetUIData(UGameplayEffect* GameplayEffect) {
    return NULL;
}

FGameplayTagContainer UDogwoodBlueprintFunctionLibrary::GetPlayerOwnedGameplayTags(const UObject* WorldContextObject) {
    return FGameplayTagContainer{};
}

UAbilitySystemComponent* UDogwoodBlueprintFunctionLibrary::GetPlayerAbilitySystemComponent(const UObject* WorldContextObject) {
    return NULL;
}

FGameplayTag UDogwoodBlueprintFunctionLibrary::GetGameplayTagFromString(const FString& TagName) {
    return FGameplayTag{};
}

FGameplayTag UDogwoodBlueprintFunctionLibrary::GetGameplayTagFromName(const FName& TagName) {
    return FGameplayTag{};
}

void UDogwoodBlueprintFunctionLibrary::FlushPressedKeysNextTick(const UObject* WorldContextObject) {
}

FVector UDogwoodBlueprintFunctionLibrary::FindTeleportSpot(const UObject* WorldContextObject, const AActor* TestActor, FVector PlaceLocation, FRotator PlaceRotation) {
    return FVector{};
}

FText UDogwoodBlueprintFunctionLibrary::DoubleToTextCultureInvariant(double Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits) {
    return FText::GetEmpty();
}

bool UDogwoodBlueprintFunctionLibrary::DoesPlayerHaveAbility(const UObject* WorldContextObject, const TSubclassOf<UGameplayAbility> AbilityClass, const bool bRequireActive) {
    return false;
}

bool UDogwoodBlueprintFunctionLibrary::DoesComponentHaveAbility(UAbilitySystemComponent* Component, const TSubclassOf<UGameplayAbility> AbilityClass, const bool bRequireActive) {
    return false;
}

bool UDogwoodBlueprintFunctionLibrary::CapsuleOverlapByChannel(const UObject* WorldContextObject, TEnumAsByte<ECollisionChannel> TraceChannel, const FVector& position, const FRotator& Rotation, const float& Radius, const float& HalfHeight, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents) {
    return false;
}

bool UDogwoodBlueprintFunctionLibrary::CanPlayerActivateAbility(const UObject* WorldContextObject, const TSubclassOf<UGameplayAbility> AbilityClass) {
    return false;
}

bool UDogwoodBlueprintFunctionLibrary::CanFindTeleportSpot(const UObject* WorldContextObject, const AActor* TestActor, FVector PlaceLocation, FRotator PlaceRotation) {
    return false;
}

FDWActorsBindingData UDogwoodBlueprintFunctionLibrary::BindSequenceActorsByTag(ALevelSequenceActor* InLevelSequenceActor, const FStoreStateParams& Params) {
    return FDWActorsBindingData{};
}

