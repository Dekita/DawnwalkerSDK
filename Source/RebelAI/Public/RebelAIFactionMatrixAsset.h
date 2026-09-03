#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ERebelAIAttitude.h"
#include "FactionPair.h"
#include "RebelAIFactionMatrixAsset.generated.h"

UCLASS(Blueprintable)
class REBELAI_API URebelAIFactionMatrixAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FFactionPair, ERebelAIAttitude> AttitudeMatrix;
    
public:
    URebelAIFactionMatrixAsset();

};

