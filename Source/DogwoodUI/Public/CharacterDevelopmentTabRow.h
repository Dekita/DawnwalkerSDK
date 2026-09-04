#pragma once
#include "CoreMinimal.h"
#include "ECharacterDevelopmentMode.h"
#include "Engine/DataTable.h"
#include "EUIAudioWidgetType.h"
#include "CharacterDevelopmentTabRow.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FCharacterDevelopmentTabRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> TabIconSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIAudioWidgetType AudioLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterDevelopmentMode DevelopmentMode;
    
    DOGWOODUI_API FCharacterDevelopmentTabRow();
};

