#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WwiseAssetLibraryGroup.generated.h"

class UWwiseAssetLibrary;

UCLASS(Blueprintable, EditInlineNew)
class WWISEPACKAGING_API UWwiseAssetLibraryGroup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWwiseAssetLibrary>> Libraries;
    
    UWwiseAssetLibraryGroup();

};

