#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EUIAudioCategory.h"
#include "EUIAudioWidgetAction.h"
#include "EUIAudioWidgetType.h"
#include "DogwoodUIAudio.generated.h"

class UObject;
class UWidget;

UCLASS(Blueprintable)
class DOGWOODUI_API UDogwoodUIAudio : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDogwoodUIAudio();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void PlayUISound(EUIAudioCategory AudioCategory, EUIAudioWidgetType WidgetType, const EUIAudioWidgetAction WidgetAction, const UWidget* Widget, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="WorldContextObject"))
    static void PlayUIItemMaterialSound(EUIAudioCategory AudioCategory, EUIAudioWidgetType WidgetType, const EUIAudioWidgetAction WidgetAction, const FItemHandle& ItemHandle, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void EnableUIAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void DisableUIAudio();
    
};

