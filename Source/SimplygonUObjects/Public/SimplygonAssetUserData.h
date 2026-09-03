#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "ESimplygonMetaTagType.h"
#include "SimplygonAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimplygonMetaTagType MetaTag;
    
    USimplygonAssetUserData();

};

