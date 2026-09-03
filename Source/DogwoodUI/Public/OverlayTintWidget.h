#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "OverlayTintWidget.generated.h"

class UMaterialInterface;
class URetainerBox;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UOverlayTintWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TintMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URetainerBox* MaterialRetainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TintColor;
    
    UOverlayTintWidget();

    UFUNCTION(BlueprintCallable)
    void SetTintColor(const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable)
    void Render();
    
};

