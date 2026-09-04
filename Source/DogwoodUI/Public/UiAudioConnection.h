#pragma once
#include "CoreMinimal.h"
#include "EItemMaterialType.h"
#include "Engine/DataTable.h"
#include "EAbilityCategory.h"
#include "EUIAudioCategory.h"
#include "EUIAudioWidgetAction.h"
#include "EUIAudioWidgetContext.h"
#include "EUIAudioWidgetType.h"
#include "UiAudioConnection.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct DOGWOODUI_API FUiAudioConnection : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIAudioCategory UiAudioCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIAudioWidgetType WidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIAudioWidgetAction WidgetAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIAudioWidgetContext WidgetContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemMaterialType ItemMaterialSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAbilityCategory AbilitySound;
    
    FUiAudioConnection();
};

