#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DawnwalkerTraversalMontage.h"
#include "DawnwalkerTraversalMontageSet.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerTraversalMontageSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDawnwalkerTraversalMontage> Montages;
    
    UDawnwalkerTraversalMontageSet();

};

