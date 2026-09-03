#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "StoreStateParams.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/CurveTable.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetTextLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DWActorsBindingData.h"
#include "EDogwoodDLCType.h"
#include "Templates/SubclassOf.h"
#include "DogwoodBlueprintFunctionLibrary.generated.h"

class AActor;
class ALevelSequenceActor;
class UAbilitySystemComponent;
class UAkAudioEvent;
class UGameplayAbility;
class UGameplayEffect;
class UGameplayEffectUIData;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class DOGWOODUTIL_API UDogwoodBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDogwoodBlueprintFunctionLibrary();

    UFUNCTION(BlueprintPure)
    static void WorldDistanceToText(const double& InDistance, FText& OutText);
    
    UFUNCTION(BlueprintCallable)
    static void UnlockAbilityOrChangeLevel(UAbilitySystemComponent* Component, const TSubclassOf<UGameplayAbility> AbilityClass, const int32 Level);
    
    UFUNCTION(BlueprintCallable)
    static void UnbindSequenceActors(UPARAM(Ref) FDWActorsBindingData& BindingData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString StringToHumanReadable(const FString& DisplayName, bool bIsBool);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentSelectable(UPrimitiveComponent* Component, bool bSelectable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D ProjectCircular2DInputToSquareGate(const FVector2D& Input);
    
    UFUNCTION(BlueprintCallable)
    static void LoadAkEventData(UAkAudioEvent* Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float K2_GetDistanceToNavMeshTileEdge(const FVector& InWorldCoordinate);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSubscribedDLC(EDogwoodDLCType InDLC);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSimulateInEditor();
    
    UFUNCTION(BlueprintCallable)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetValueFromCurveTableRowHandle(FCurveTableRowHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameplayEffectUIData* GetUIData(UGameplayEffect* GameplayEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGameplayTagContainer GetPlayerOwnedGameplayTags(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAbilitySystemComponent* GetPlayerAbilitySystemComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetGameplayTagFromString(const FString& TagName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetGameplayTagFromName(const FName& TagName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void FlushPressedKeysNextTick(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FVector FindTeleportSpot(const UObject* WorldContextObject, const AActor* TestActor, FVector PlaceLocation, FRotator PlaceRotation);
    
    UFUNCTION(BlueprintPure)
    static FText DoubleToTextCultureInvariant(double Value, TEnumAsByte<ERoundingMode> RoundingMode, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits, int32 MinimumFractionalDigits, int32 MaximumFractionalDigits);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool DoesPlayerHaveAbility(const UObject* WorldContextObject, const TSubclassOf<UGameplayAbility> AbilityClass, const bool bRequireActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesComponentHaveAbility(UAbilitySystemComponent* Component, const TSubclassOf<UGameplayAbility> AbilityClass, const bool bRequireActive);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CapsuleOverlapByChannel(const UObject* WorldContextObject, TEnumAsByte<ECollisionChannel> TraceChannel, const FVector& position, const FRotator& Rotation, const float& Radius, const float& HalfHeight, const TArray<AActor*>& ActorsToIgnore, TArray<UPrimitiveComponent*>& OutComponents);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CanPlayerActivateAbility(const UObject* WorldContextObject, const TSubclassOf<UGameplayAbility> AbilityClass);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CanFindTeleportSpot(const UObject* WorldContextObject, const AActor* TestActor, FVector PlaceLocation, FRotator PlaceRotation);
    
    UFUNCTION(BlueprintCallable)
    static FDWActorsBindingData BindSequenceActorsByTag(ALevelSequenceActor* InLevelSequenceActor, const FStoreStateParams& Params);
    
};

