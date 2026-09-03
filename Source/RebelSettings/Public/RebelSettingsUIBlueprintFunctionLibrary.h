#pragma once
#include "CoreMinimal.h"
#include "StructUtils/InstancedStruct.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Input/Events.h"
#include "Layout/Geometry.h"
#include "Components/SlateWrapperTypes.h"
#include "ENumericValueType.h"
#include "ERebelSettingControlType.h"
#include "PickerSetting.h"
#include "RebelSettingEntry.h"
#include "Templates/SubclassOf.h"
#include "RebelSettingsUIBlueprintFunctionLibrary.generated.h"

class UAnalogSlider;
class UDataTable;
class UObject;
class URebelSettingEntryWidgetBase;

UCLASS(Blueprintable)
class REBELSETTINGS_API URebelSettingsUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    URebelSettingsUIBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool UpdateSettings(const FRebelSettingEntry& Entry, float NewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSettingVisibleInCurrentRegion(const FRebelSettingEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSettingVisible(const FRebelSettingEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSettingInCurrentPlatformGroup(const FRebelSettingEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSettingEditable(const FRebelSettingEntry& InEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsControlEditable(FInstancedStruct InControlType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSliderValue(const FRebelSettingEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ENumericValueType GetSliderType(const FInstancedStruct& InSlider);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSliderMinimumValue(const FInstancedStruct& InSlider);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetSliderMaximumValue(const FInstancedStruct& InSlider);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSettingName(const FRebelSettingEntry& InEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetSettingDescription(const FRebelSettingEntry& InEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPickerValue(const FRebelSettingEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="InWorldContext"))
    static TArray<FPickerSetting> GetPickerSettingInfo(const UObject* InWorldContext, const FRebelSettingEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetNumericControlLabelForEntry(float Value, const FRebelSettingEntry& InEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSubclassOf<URebelSettingEntryWidgetBase> GetCustomWidgetForEntry(const FRebelSettingEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ERebelSettingControlType GetControlTypeForEntry(const FRebelSettingEntry& Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> CollectValidEntryNamesFromTable(const UDataTable* InTable);
    
    UFUNCTION(BlueprintCallable)
    static FEventReply BP_UpdateAnalogSliderValue(const UAnalogSlider* SliderWidget, const FGeometry& MyGeometry, const FAnalogInputEvent& InAnalogInputEvent);
    
};

