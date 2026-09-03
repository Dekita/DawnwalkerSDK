#pragma once
#include "CoreMinimal.h"
#include "CompassElementWidget.h"
#include "CompassPinWidget.generated.h"

class UCommonTextBlock;
class UMappinWidget;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCompassPinWidget : public UCompassElementWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* DistanceBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* DistanceLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMappinWidget* Mappin;
    
    UCompassPinWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMappinTracked() const;
    
};

