#pragma once
#include "CoreMinimal.h"
#include "ComicPageData.h"
#include "ComicData.generated.h"

USTRUCT(BlueprintType)
struct DOGWOODUI_API FComicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComicPageData> PageData;
    
    FComicData();
};

