#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "OverlayTintWidget.h"
#include "CustomTintWidget.generated.h"

class UBorder;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCustomTintWidget : public UOverlayTintWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BorderBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* FillBorder;
    
    UCustomTintWidget();

    UFUNCTION(BlueprintCallable)
    void SetBorderFromTextureReference(UTexture2D* InTexture);
    
    UFUNCTION(BlueprintCallable)
    void SetBorderFromSoftTextureReference(TSoftObjectPtr<UTexture2D> InTexture);
    
};

