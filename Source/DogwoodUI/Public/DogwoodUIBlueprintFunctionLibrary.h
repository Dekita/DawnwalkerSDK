#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Input/Events.h"
#include "Fonts/SlateFontInfo.h"
#include "DogwoodUIBlueprintFunctionLibrary.generated.h"

class ISlateTextureAtlasInterface;
class USlateTextureAtlasInterface;
class UDynamicEntryBox;
class UObject;
class UPaperSprite;
class UTexture;
class UTexture2D;
class UUserWidget;
class UWidget;

UCLASS(Blueprintable)
class DOGWOODUI_API UDogwoodUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDogwoodUIBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopFade(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartFade(const UObject* WorldContextObject, float ToAlpha, float duration, FLinearColor Color, bool bHoldWhenFinished);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UPaperSprite* SpriteReference(UPaperSprite* InSprite);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetManualFade(const UObject* WorldContextObject, float InFadeAmount, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWidgetVisibleInHierarchy(const UWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSimulatedGamepadClick(const UWidget* InContextWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFullyContainedIn(UWidget* Contained, UWidget* Container);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFocusEventCausedByNavigation(const FFocusEvent& InEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFocusEventCausedByMouse(const FFocusEvent& InEvent);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* GetWidgetFromName(const UUserWidget* StartingWidget, const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static float GetRadialEntryBoxElementAngle(UDynamicEntryBox* DynamicEntryBox, int32 EntryIndex, float StartingAngleOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAtlasSpriteUV(TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, FVector2D& StartUV, FVector2D& SizeUV);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTexture* GetAtlasSpriteTexture(TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetAtlasSpriteSize(TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateTextSections(const FString& Text, const FSlateFontInfo& FontInfo, const float Scale, const FVector2D FirstPageSize, const FVector2D NewPageSize, TArray<FString>& OutTextSections);
    
    UFUNCTION(BlueprintCallable)
    static void CompileImageForEditor(UTexture2D* ImageTexture);
    
};

