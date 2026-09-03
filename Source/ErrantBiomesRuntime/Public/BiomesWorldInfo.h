#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BiomesComponentGenerateTransformsInfo.h"
#include "BiomesWorldInfo.generated.h"

UCLASS(Blueprintable)
class ERRANTBIOMESRUNTIME_API UBiomesWorldInfo : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBiomesComponentGenerateTransformsInfo ComponentGenerateTransformsInfo;
    
    UBiomesWorldInfo();

};

