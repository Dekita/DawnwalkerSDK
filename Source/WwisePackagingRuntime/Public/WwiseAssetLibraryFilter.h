#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WwiseAssetLibraryFilter.generated.h"

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class WWISEPACKAGINGRUNTIME_API UWwiseAssetLibraryFilter : public UObject {
    GENERATED_BODY()
public:
    UWwiseAssetLibraryFilter();

};

