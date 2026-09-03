#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DawnwalkerLookAtRegularTurnParams.h"
#include "DawnwalkerLookAtTurnConfig.generated.h"

UCLASS(Blueprintable)
class DAWNWALKER_API UDawnwalkerLookAtTurnConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDawnwalkerLookAtRegularTurnParams TurnParams;
    
    UDawnwalkerLookAtTurnConfig();

};

