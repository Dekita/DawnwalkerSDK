#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WoundContainerConfig.generated.h"

class UWoundType;

UCLASS(Blueprintable)
class DAWNWALKER_API UWoundContainerConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableWounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UWoundType*> InflictableWounds;
    
    UWoundContainerConfig();

};

