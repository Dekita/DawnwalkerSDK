#pragma once
#include "CoreMinimal.h"
#include "ComicPageData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FComicPageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> Tiles;
    
    DOGWOODUI_API FComicPageData();
};

