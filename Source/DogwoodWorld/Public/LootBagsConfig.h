#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LoogBagsPreservationConfig.h"
#include "Templates/SubclassOf.h"
#include "LootBagsConfig.generated.h"

class ALootBagContainer;

UCLASS(Blueprintable)
class DOGWOODWORLD_API ULootBagsConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALootBagContainer> LootBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoogBagsPreservationConfig PreservationConfig;
    
    ULootBagsConfig();

};

