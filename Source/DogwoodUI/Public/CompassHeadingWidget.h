#pragma once
#include "CoreMinimal.h"
#include "CompassElementWidget.h"
#include "CompassHeadingWidget.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCompassHeadingWidget : public UCompassElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* HeadingLabel;
    
public:
    UCompassHeadingWidget();

};

