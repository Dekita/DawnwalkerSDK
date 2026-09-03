#pragma once
#include "CoreMinimal.h"
#include "ECharacterMaterialParamType.h"
#include "Engine/DataAsset.h"
#include "CharacterMaterialParamConfig.h"
#include "CharacterMaterialParamsConfig.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UCharacterMaterialParamsConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECharacterMaterialParamType, FCharacterMaterialParamConfig> ParamsConfig;
    
    UCharacterMaterialParamsConfig();

};

