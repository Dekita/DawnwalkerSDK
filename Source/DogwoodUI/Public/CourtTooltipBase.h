#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "CourtTooltipBase.generated.h"

class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCourtTooltipBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox;
    
    UCourtTooltipBase();

};

