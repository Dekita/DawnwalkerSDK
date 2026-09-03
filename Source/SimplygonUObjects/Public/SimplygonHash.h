#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "SimplygonHash.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class SIMPLYGONUOBJECTS_API USimplygonHash : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Hash;
    
    USimplygonHash();

};

