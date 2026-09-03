#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ERebelPS5ConsoleType.h"
#include "ERebelPlatformType.h"
#include "ERebelSKURegion.h"
#include "ERebelXboxSeriesConsoleType.h"
#include "RebelBlueprintFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class REBELUTILS_API URebelBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetInterfaceScale(float CustomUIScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSubscribedFreeWeekend();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSubscribedDLC(const FString& InDlcTitleId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsShipping();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static bool IsPIE(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContextObject"))
    static bool IsGame(const UObject* InWorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDevelopment();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsDebug();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurrentXboxSeriesPlatformType(ERebelXboxSeriesConsoleType InXboxSeriesPlatformType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurrentPS5PlatformType(ERebelPS5ConsoleType InPS5PlatformType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCurrentPlatformType(ERebelPlatformType InPlatformType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCompiledWithEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERebelSKURegion GetSKURegion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRHIFrameTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRenderFrameTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGPUFrameTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetGeoLocationCountryCode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetGameFrameTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDisplayProjectVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetDisplayProjectChangelist();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERebelXboxSeriesConsoleType GetCurrentXboxSeriesPlatformType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCurrentTitleID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERebelPS5ConsoleType GetCurrentPS5PlatformType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERebelPlatformType GetCurrentPlatformType();
    
};

