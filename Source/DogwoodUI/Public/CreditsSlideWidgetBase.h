#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "CreditsSlide.h"
#include "CreditsSlideWidgetBase.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCreditsSlideWidgetBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
    UCreditsSlideWidgetBase();

    UFUNCTION(BlueprintCallable)
    void Setup(const FCreditsSlide& InSlideData);
    
};

