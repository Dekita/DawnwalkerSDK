#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "TriggerHUDSubtitleDelegate.h"
#include "VideoPlaybackOptions.h"
#include "UIFrontend.generated.h"

class UCanvasPanel;
class UCommonActivatableWidgetContainerBase;
class UFadeOverlay;
class UObject;
class UOverlay;
class UTitleCardWidget;
class UToastWidgetBase;
class UUIFrontend;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UUIFrontend : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DebugFrontendToggleHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DebugScreenshotHandle;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTriggerHUDSubtitle TriggerHUDSubtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFadeOverlay* FadeOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* RootOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTitleCardWidget* TitleCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UToastWidgetBase* ToastWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* _WMC;
    
    UUIFrontend();

    UFUNCTION(BlueprintCallable)
    void ToggleFrontendVisibility();
    
    UFUNCTION(BlueprintCallable)
    void ShowPauseMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetGameLayersVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetFrontendVisible(bool bVisible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterLayer(FGameplayTag LayerTag, UCommonActivatableWidgetContainerBase* LayerWidget);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushBenchmarkWidget();
    
    UFUNCTION(BlueprintCallable)
    bool PlayVideo(const FVideoPlaybackOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    void OnVideoQueueStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnVideoQueueFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UUIFrontend* GetFrontend(const UObject* WorldContextObject);
    
};

