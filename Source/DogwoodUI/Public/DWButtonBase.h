#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBase.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EUIAudioCategory.h"
#include "EUIAudioWidgetType.h"
#include "DWButtonBase.generated.h"

class UCommonActionWidget;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UDWButtonBase : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ButtonTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ButtonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ButtonString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ButtonGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ButtonInt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ButtonObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIAudioWidgetType WidgetType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bConsumeInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_ButtonText: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonText;
    
public:
    UDWButtonBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable)
    void SetParentPageType(EUIAudioCategory PageType);
    
    UFUNCTION(BlueprintCallable)
    void SetInputActionWidget(UCommonActionWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EUIAudioCategory GetParentPageType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetActionProgress() const;
    
};

