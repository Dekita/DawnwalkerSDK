#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "HubPrestreamResourcesDataAsset.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class DOGWOODUI_API UHubPrestreamResourcesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> Textures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture2D*> AlwaysLoadedLowMipTextures;
    
    UHubPrestreamResourcesDataAsset();

};

