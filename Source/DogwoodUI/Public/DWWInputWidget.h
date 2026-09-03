#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Blueprint/UserWidget.h"
#include "DWWInputWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UDWWInputWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InputAction;
    
public:
    UDWWInputWidget();

};

