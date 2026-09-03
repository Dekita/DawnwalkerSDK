#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WatermarkWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UWatermarkWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Label;
    
    UWatermarkWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetWatermarkString(const FString& InWatermarkString);
    
};

