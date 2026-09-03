#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "Styling/SlateBrush.h"
#include "DWBlueprintFunctionLibrary.generated.h"

class AActor;
class ADawnwalkerCharacterBase;
class UCameraComponent;
class UInputAction;
class UObject;
class UQuest;

UCLASS(Blueprintable)
class DAWNWALKER_API UDWBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDWBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ToggleTorch(ADawnwalkerCharacterBase* TorchOwner);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetVoiceOverLanguage(const FString& Culture, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetCulture(const FString& Culture);
    
    UFUNCTION(BlueprintCallable)
    static void LogWarning(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void LogError(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static void log(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    static bool IsHealthBarDisplayedOverActor(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasTorch(const ADawnwalkerCharacterBase* TorchOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetVoiceOverLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetSupportedVoiceOverLanguages();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static int32 GetQuestLevelDeltaToPlayer(const UObject* InWorldContext, const UQuest* TargetQuest);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static int32 GetLevelDeltaToPlayer(const UObject* InWorldContext, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static FSlateBrush GetKeyIcon(const UObject* InWorldContext, const FKey& Key, const uint8 DirectionMask, bool bCheckAllAvailableSets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static FSlateBrush GetInputActionIcon(const UObject* InWorldContext, const UInputAction* InputAction, const uint8 DirectionMask, bool bCheckAllAvailableSets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCulture();
    
    UFUNCTION(BlueprintCallable)
    static bool FindPointBehindTPPCamera(UCameraComponent* Camera, AActor* CameraTarget, FVector& Result, float DistanceBehindCamera);
    
    UFUNCTION(BlueprintCallable)
    static void EnableTorch(ADawnwalkerCharacterBase* TorchOwner, bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanRespawnPlayerDebug();
    
};

