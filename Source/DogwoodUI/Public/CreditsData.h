#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CreditsEntry.h"
#include "CreditsSlide.h"
#include "ECreditsEntryType.h"
#include "CreditsData.generated.h"

class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable)
class DOGWOODUI_API UCreditsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreditsSlide> Slides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> Backgrounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECreditsEntryType, TSoftClassPtr<UUserWidget>> WidgetEntryTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreditsEntry> Entries;
    
    UCreditsData();

};

