#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BoundHUBTabSetup.h"
#include "BoundWindowSetup.h"
#include "DWActivatableWidget.h"
#include "DWHUDWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UDWHUDWidgetBase : public UDWActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoundWindowSetup> BoundWindows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoundHUBTabSetup> BoundHUBTabs;
    
public:
    UDWHUDWidgetBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBoundWindowActionInputAllowed(const FDataTableRowHandle& ActionHandle);
    
};

