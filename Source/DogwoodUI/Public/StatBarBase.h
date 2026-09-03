#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "StatBarBase.generated.h"

class UDWStatBarStyle;
class UTippedProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UStatBarBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTippedProgressBar* MainProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTippedProgressBar* BackgroundProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackgroundBarDelayLeft;
    
    UStatBarBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateProgress(float InProgress, bool bForceNoDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UDWStatBarStyle* GetStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetSecondaryProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetPrimaryProgress() const;
    
};

