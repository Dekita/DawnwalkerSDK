#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "WwiseExtensionsBlueprintLibrary.generated.h"

class AActor;
class ARWAudioListener;
class UGlobalAudioComponent;
class UObject;
class URWAudioComponent;
class URWAudioComponentSettingsPreset;
class USceneComponent;

UCLASS(Blueprintable)
class WWISEEXTENSIONS_API UWwiseExtensionsBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWwiseExtensionsBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopSoundByPlayingID(const int32 PlayingID, const int32 FadeTimeInMs);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static URWAudioComponent* SpawnRWAudioComponentAtLocation(const UObject* WorldContextObject, FVector Location, FRotator orientation, bool bAutoDestroy, const URWAudioComponentSettingsPreset* AudioComponentSettings, const FString& DebugName);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ResumeSoundByPlayingID(const int32 PlayingID, const int32 TransitionDurationInMs);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PauseSoundByPlayingID(const int32 PlayingID, const int32 TransitionDurationInMs);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPlayerTransform(FTransform& Transform, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPlayerLocation(FVector& Location, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    static float GetOutdoorValue();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ARWAudioListener* GetListener(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UGlobalAudioComponent* GetGlobalAudioComponent(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static URWAudioComponent* FindOrAddRWAudioComponent(AActor* Actor, bool& bOutNewComponentWasCreated);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void EnableObstructionOcclusion();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void DisableObstructionOcclusion();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static URWAudioComponent* AttachRWAudioComponent(USceneComponent* AttachToComponent, FName AttachPointName, const FVector& RelativeLocation, bool& bOutNewComponentWasCreated);
    
};

