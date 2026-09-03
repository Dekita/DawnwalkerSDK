#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DawnwalkerPasserbyLookAtParams.h"
#include "DawnwalkerPasserbyLookAtConfig.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerPasserbyLookAtConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerPasserbyLookAtParams PasserbyLookAtParams;
    
    UDawnwalkerPasserbyLookAtConfig();

};

