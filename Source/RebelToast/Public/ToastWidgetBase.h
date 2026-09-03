#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ToastMessage.h"
#include "ToastWidgetBase.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class REBELTOAST_API UToastWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* FadeOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* Label;
    
    UToastWidgetBase();

    UFUNCTION(BlueprintCallable)
    void Show(const FToastMessage& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShowRequested(const FToastMessage& Message);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyToastComplete();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowingToast();
    
};

