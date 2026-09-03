#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ERebelSKURegion.h"
#include "DWActivatableWidget.h"
#include "TitleScreen.generated.h"

class UImage;
class USlateBrushAsset;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UTitleScreen : public UDWActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TriggeringInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Logo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USlateBrushAsset> GlobalLogo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ERebelSKURegion, TSoftObjectPtr<USlateBrushAsset>> RegionLogoOverrides;
    
    UTitleScreen();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTitleScreenHidden();
    
};

