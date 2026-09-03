#pragma once
#include "CoreMinimal.h"
#include "ERebelLanguage.h"
#include "ComicData.h"
#include "DWActivatableWidget.h"
#include "ComicViewerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UComicViewerWidget : public UDWActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelLanguage, FComicData> PageData;
    
public:
    UComicViewerWidget();

};

