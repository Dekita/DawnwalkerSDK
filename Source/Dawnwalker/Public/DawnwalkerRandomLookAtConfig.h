#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DawnwalkerRandomLookAtParams.h"
#include "DawnwalkerRandomLookAtConfig.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerRandomLookAtConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerRandomLookAtParams RandomLookAtParams;
    
    UDawnwalkerRandomLookAtConfig();

};

