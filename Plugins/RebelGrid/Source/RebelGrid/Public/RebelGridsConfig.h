#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RebelGridDef.h"
#include "RebelGridsConfig.generated.h"

UCLASS(Blueprintable)
class REBELGRID_API URebelGridsConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRebelGridDef> Grids;
    
    URebelGridsConfig();

};

