#pragma once
#include "CoreMinimal.h"
#include "BoundWindowSetup.h"
#include "PausableActivatableWidget.h"
#include "GameHUDWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UGameHUDWidget : public UPausableActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoundWindowSetup> BoundWindows;
    
public:
    UGameHUDWidget();

};

