#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Margin.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
#include "EFillType.h"
#include "TippedProgressBar.generated.h"

UCLASS(Blueprintable)
class DOGWOODUI_API UTippedProgressBar : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFillType FillType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ProgressBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush TipBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TipVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FlashBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin FlashMargin;
    
    UTippedProgressBar();

    UFUNCTION(BlueprintCallable)
    void SetTipVisible(bool bInTipVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetTipBrush(FSlateBrush InBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetProgressBrush(FSlateBrush InBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable)
    void SetFlashOpacity(float InFlashOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetFlashMargin(const FMargin& InFlashMargin);
    
    UFUNCTION(BlueprintCallable)
    void SetFlashBrush(FSlateBrush InBrush);
    
    UFUNCTION(BlueprintCallable)
    void SetFillType(EFillType InFillType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetTipPosition() const;
    
};

