#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Types/SlateEnums.h"
#include "Layout/Geometry.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "RebelSettingEntry.h"
#include "RebelSettingEntryWidgetBase.generated.h"

class URebelSettingEntryWidgetBase;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class REBELSETTINGS_API URebelSettingEntryWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSettingSelectedDelegate, URebelSettingEntryWidgetBase*, SettingWidget);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSettingSelectedDelegate OnSettingSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelSettingEntry TargetEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* AboveNavNeighbor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* BelowNavNeighbor;
    
public:
    URebelSettingEntryWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Update();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Setup(const FRebelSettingEntry& InEntry);
    
    UFUNCTION(BlueprintCallable)
    void SetSettingSelected(bool bInSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSettingNeighborWidgets(UWidget* Above, UWidget* Below);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayUISelectSound();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSelectionStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeValueByNavigation(EUINavigation InDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEventReply ChangeValueByAnalog(const FGeometry& InGeometry, const FAnalogInputEvent& InAnalogEvent);
    
};

