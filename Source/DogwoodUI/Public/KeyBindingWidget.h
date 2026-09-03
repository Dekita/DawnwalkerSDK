#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DWActivatableWidget.h"
#include "KeyBindingWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UKeyBindingWidget : public UDWActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetMappingName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle CancelActionHandle;
    
public:
    UKeyBindingWidget();

};

